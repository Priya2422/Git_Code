/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        if((*(p+i))%2==0)
        printf("%d ",*(p+i));
        else
        continue;
    }
    for(i=0;i<n;i++){
        if((*(p+i))%2!=0)
        printf("%d ",*(p+i));
    }
 free(p);

    return 0;
}
