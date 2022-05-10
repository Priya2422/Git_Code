#include<stdio.h>
int search(int arr[],int n,int num){
    int count=0;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
             printf("Element found at %d position",i);
             count++;
        }
     }
    if(count==0){ 
    printf("Element not found");
    }
}
int main()
{
    int n,a[10],num;
    printf("Enter no:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&num);
    search(a,n,num);
return 0;
}