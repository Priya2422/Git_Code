#include<stdio.h>
int freq(int *a,int n, int x){
int c=0;
for(int i=0;i<n;i++){
    if(a[i]==x){
        c=c+1;
    }
}
return c;
}
int main()
{
    int arr[10],n,x;
    printf("Enter number of elements: ");
    scanf("%d<",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the value: ");
    scanf("%d",&x);
    printf("%d",freq(arr,n,x));
  
return 0;
}