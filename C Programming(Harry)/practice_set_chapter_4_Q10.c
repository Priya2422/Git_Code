#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("Enter the no to be checked:");
    scanf("%d",&n);{
    for(int i=2;i<n;i++)
        if(n%i==0){
           flag=0;
           break;
        }
    }
        if(flag==0)
        printf("It is not a prime no");
    else
    printf("It is a prime no");
return 0;
}