#include<stdio.h>
int main()
{
    int n,a[10],num1,num0;
    printf("Enter no:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter range");
    scanf("%d",&num0);
    scanf("%d",&num1);
for(int i=0;i<n;i++){
if(a[i]==num0){
      printf("%d",a[i]);
      while(a[i+1]!=num1){
          printf("%d",a[i+1]);
            i++;
}
printf("%d",a[i+1]);
break;
}
}
return 0;
}