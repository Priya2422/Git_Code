#include<stdio.h>
int main()
{
	int a[100][100]; 
	int i,j,r1,c1,c=0,p=1,s=0;
	printf(" Enter Rows : "); 
	scanf("%d",&r1);
	printf(" Enter Column : ");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" Enter Elements a%d%d: ",i+1,j+1); 
			scanf("%d",&a[i][j]);
			if(a[i][j]>0 || a[i][j]<0) 
			c=c+1;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(i==j) 
			p=p*a[i][j]; 
		}
	}
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(j>i) 
			s=s+a[i][j]; 
		}
	}
	printf("\n\tMatrix Form : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]); 
			if(j==c1-1) 
			printf("\n");
		}
	}
	printf(" Number of Non Zero Elements : %d\n",c);
	printf(" Sum of Elements above Leading Diagonal : %d\n",s);
	printf(" Product of Diagonal : %d\n",p);
	printf(" Elements Below Leading Diagonal : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(j<i) 
			printf("%d\t",a[i][j]); 
		}
	}
	return 0;
}