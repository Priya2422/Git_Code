#include<stdio.h>
int main(){
    int a=1,n;
    printf("The loop will go on to:");
    scanf("%d",&n);
    do{
        printf("The no is %d",a);
        a++;
    }
    while(a<=n);
}