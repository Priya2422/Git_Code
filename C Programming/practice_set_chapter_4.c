#include<stdio.h>
int main()
{
    int num,i,prod;
    printf("Enter the no:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        prod=num*i;
        printf("%d * %d = %d\n",num,i,prod);
        prod=0;
    }
return 0;
}