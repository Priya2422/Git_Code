#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int x=n-1;
  int c=0;
  int arr[100];
  int a[100];
  for(int i=0;i<n;i++)
    {
        printf("Enter the array element in position %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
     {
       if(arr[i]%2==0)
         {
            a[c]=arr[i];
            c++;
            }
            else
            {
            a[x]=arr[i];
            x--;
            }
        }
         for(int i=0;i<n;i++)
         {
            printf(" %d",a[i]);
         }
}