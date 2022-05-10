#include<stdio.h>
int main()
{
    int n,arr[10],m,min,max,i,second_max,sec_min;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&second_max,&sec_min);

    min=max=second_max=sec_min=arr[0];
for(i=1;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
}

  for(int i=1;i<n;i++){
     if(second_max<max && second_max>arr[i]){
         second_max=arr[i];
     }
if(sec_min>min && sec_min<arr[i]){
    sec_min=arr[i];
}
}
printf("Second max and min is: %d %d",second_max,sec_min);
return 0;
}