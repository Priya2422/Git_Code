// WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of the array :");
  scanf("%d",&n);
  int a[100];
  int max=0;
  int min=9999999;
  for(int i=0;i<n;i++)
    {
        printf("Enter the array element in position %d: ",i);
        scanf("%d",&a[i]);
    }
  for(int i=0;i<n;i++){
      if(a[i]<n){
        if(min>a[i])
 {
    min=a[i];
    }
 else if(max<a[i])
 {
      max=a[i];
 }
    else
    continue;
 }
}
printf("kth largest element is %d\n",max);
printf("kth smallest element is %d\n",min);
}