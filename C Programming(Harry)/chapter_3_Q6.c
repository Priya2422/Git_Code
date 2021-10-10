#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the four integers");
    scanf("%d\t%d\t%d\t%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    printf("a is greatest integer");
    else if(b>a && b>c && b>d)
    printf("b is greatest integer");
    else if(c>a && c>b && c>d)
    printf("c is greatest integer");
    else
    printf("d is greatest integer");
}