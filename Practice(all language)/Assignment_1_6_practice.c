#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,min,n,a[10];
    printf("enter no:");
    scanf("%d",&n);
      printf("enter elem:");
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        min=a[i];
        j=i;
        while(j<n){
            if(min<a[j+1]){
                printf("%d\n",a[j+1]);
                break;
            }

else{
    j++;
continue;}
        }

        min=0;
    }

return 0;
}