#include<stdio.h>
int smallestelem(int *c,int l,int r,int k){
    int i,j,temp;
        for(i=l;i<r+1;i++){
            for(j=i+1;j<r+1;j++){
                if(c[i]>c[j]){
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
        }
}
 printf("Kth smallest element is: %d",c[k+1]);
}
    int main()
    {
        int arr[10],l=0,k,n;
        printf("enter no elements: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int r=n-1;
        printf("enter k: ");
        scanf("%d",&k);
        smallestelem(arr,l,r,k);
      
    return 0;
}
