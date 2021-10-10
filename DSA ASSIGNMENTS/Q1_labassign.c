#include <stdio.h>

int main()
{
    int j[30];
    int i,n,large,small;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    large=small=j[0];
    for(i=1;i<n;i++)
    {
        if(j[i]>large)
        large=j[i];
        if(j[i]<small)
        small=j[i];
    }
    printf("Smallest element is %d\n",small);
    printf("Largest element is %d\n",large);

    return 0;
}