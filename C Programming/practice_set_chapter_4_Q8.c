#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("Enter the no:");
    scanf("%d",&n);
    for( int i=n;i;i--){
        fac=fac*i;
    }
    printf("%d",fac);
return 0;
}