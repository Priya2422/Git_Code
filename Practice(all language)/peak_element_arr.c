/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int peakelem(int arr[],int n){
    int i;
    if(arr[0]>arr[1]){
       printf("The first element is peak element and value returned is 1");
    }
     if(arr[n-1]>arr[n-2]){
               printf("The last element is peak element and value returned is 1");
    }
   else{ 
    for(i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
printf("Element at %d position is peak element and value returned is 1",i);
        }
    }
   }
           
}
int main()
{
    int a[6],i,n;
    printf("Enter no:");
    scanf("%d",&n);
    printf("Enter elememts:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    peakelem(a,n);  

    return 0;
}
