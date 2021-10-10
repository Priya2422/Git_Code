#include<stdio.h>
int main()
{
    int n=1,sum=0;
    do{
      sum=sum+n;
      n++;
    }
    while(n<=10);
    printf("%d",sum);
return 0;
}