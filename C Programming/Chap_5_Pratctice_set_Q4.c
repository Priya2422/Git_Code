#include<stdio.h>
int fibo(int num);
int main()
{
    int n;
    printf("Enter the no:\n");
    scanf("%d",&n);
    fibo(n);
    printf("The fibonacci series is: ");
    for(int i=0;i<=n;i++){
    printf("%d\t",fibo(i));
    }
}
int fibo(int num){
    if(num<=1)
    return num;
    else
    return fibo(num-1)+fibo(num-2);
  
}