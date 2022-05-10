#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,j,a,b,count=1;;
    printf("Enter numbers: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter elemnt %d: ",i);
        scanf("%d",p+i);
    }
    printf("Enter range");
    scanf("%d",&a);
    scanf("%d",&b);
for(int i=0;i<n;i++){
if(p[i]==a){
      while(p[i+1]!=b){
          count++;
            i++;
}
   }
}
      printf("%d",count);
      free(p);
return 0;
}