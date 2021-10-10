#include<stdio.h>
int main(){
    int year;
    printf("Year is");
    scanf("%d",&year);
    if(year%400==0 || ( year%4==0)
    {
        printf("Year is a leap year");
    }
    else{
        printf("YEar is not a leap year");
    }
    return 0;
}