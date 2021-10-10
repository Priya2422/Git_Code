#include <conio.h>
#include <stdio.h>
int main()
{
	int n,i=0,a,b;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int array[n];
	while(i<n)
	{
		printf("Enter Element No-%d\n",i);
		scanf("%d",&array[i]);
		i++;
	}
	printf("Enter Upper limit a: ");
	scanf("%d",&a);
	printf("Enter Lower limit b: ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
	  if((array[i]>=a)&&(array[i]<=b))
	  {
		  printf("%d ",array[i]);
	  }
	}
	return 0;
}