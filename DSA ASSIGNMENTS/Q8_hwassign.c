#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("Enter the size of the array :");
  scanf("%d",&n);
  int c=0;
  int max=0;
  int a[100];
  for(int i=0;i<n;i++)
    {
        printf("Enter the array element in position %d: ",i);
        scanf("%d",&a[i]);
        max=arr[i]
    }
     for(int i=0;i<=n;i++)
    {
       if(a[i]==a[n])
       {
           c++;
       }
    }
    printf("The largest number in the array is: %d and its frequency is %d",a[n],c);
}