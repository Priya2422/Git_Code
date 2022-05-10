#include<stdio.h>
int getminmax(int a[],int N){
    int min,max,i;
min=max=a[0];
for(i=1;i<N;i++){
    if(min>a[i]){
        min=a[i];
    }
    if(max<a[i]){
        max=a[i];
    }
}
printf("The maximum and minimum elements are: %d %d",max,min);
}
int main()
{
    int n,arr[10],m;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
getminmax(arr,n);
return 0;
}