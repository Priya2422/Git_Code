/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,*p,t,k,*N,s;
    printf("Enter size: ");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
        scanf("%d",&k);
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(*(p+i)<*(p+j)){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    
    for(i=0;i<n;i++){
        if(i==k-1){
            printf("\n%d",*(p+i));
        }
        
    N=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",N+i);
    }
        scanf("%d",&k);
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(*(N+i)>*(N+j)){
                s=*(p+i);
                *(N+i)=*(N+j);
                *(N+j)=s;
            }
        }
    }
    }
     for(i=0;i<n;i++){
        if(i==k-1){
            printf("\n%d",*(N+i));
        }
    return 0;
}
