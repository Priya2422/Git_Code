#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of the array :");
  scanf("%d",&n);
  int c=0;
  int a[100];
  int max=0;
  for(int i=0;i<n;i++)
    {
        printf("Enter the array element in position %d: ",i);
        scanf("%d",&a[i]);
    }
  for(int i=0;i<n;i++){
      if(max<a[n]){
          max=a[n];
          if(max==a[n]){
              c++;
          }
      }
  }
  printf("The occurence of largest number %d is %d",max,c);
}
