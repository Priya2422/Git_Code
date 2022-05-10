#include<stdio.h>
int pattern(int n);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    pattern(num);
return 0;
}
int pattern(int n){
    for (int i = 0; i<n; i++)
    {
      for (int j = 0; j<=(i+1); j++)
      {
          printf("*");
      }
      printf("\n");
    }
  return 0;  
}