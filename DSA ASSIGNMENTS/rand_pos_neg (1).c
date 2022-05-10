//Generate Random Numbers from lower bound to higher bound. 
//For example: lb = 0 to Ub = 1000 or Lb = -100 to Ub = 100

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, A[10];
	int Lb = 0, Ub = 1000;
	srand(time(0));
	for(i = 0; i < 10; ++i)
	{
		A[i] = (Ub - Lb)*(1.0*rand())/RAND_MAX - 100;
	}
	for(i = 0; i < 10; ++i)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}
