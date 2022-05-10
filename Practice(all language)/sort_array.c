    #include<stdio.h>
    int sortarr(int *c,int n){
        int i,j,temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(c[i]>c[j]){
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }

    }

    int main()
    {
        int arr[10],n;
        printf("enter no elements");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sortarr(arr,n);
        printf("After sorting");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
    return 0;
    }
