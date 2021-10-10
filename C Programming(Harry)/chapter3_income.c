#include<stdio.h>
int main(){
    int income;
    printf("The employee's income is:");
    scanf("%d",&income);
    if(income>=250000 && income<=500000)
    {
        printf("The income tax paid by the employee is 5%");

    }
    else if(income>500000 && income<=1000000)
    {
     printf("The income tax paid by the employee is 20%");
  
    }
    else if(income>1000000)
    {
        printf("The income tax paid by the employee is 30%");
    }
    else
    printf("no tax to be paid");
    return 0;
}