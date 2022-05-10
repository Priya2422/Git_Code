#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d\n%d",&a,&b);
    if(b>0){
        while(b!=0){
            a++;
            b--;
        }
    }
    if(b<0){
    while(b!=0){
a--;
b++;
    }
    }
    printf("Sum is: %d",a);
return 0;
}