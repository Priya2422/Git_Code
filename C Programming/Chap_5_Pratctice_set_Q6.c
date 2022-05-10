#include<stdio.h>
int sum(int num);
int main()
{
    int n;
    printf("Enter the no:\n");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));
return 0;
}
int sum(int num){
    if(num<=1)
    return 1;
    else
    return num+sum(num-1);
    }