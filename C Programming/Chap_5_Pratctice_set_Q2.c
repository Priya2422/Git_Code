#include<stdio.h>
float temp(float celsius);
int main()
{
    float c;
    printf("Enter the temperature:\n");
    scanf("%f",&c);
    temp(c);
    printf("The converted value is: %f",temp(c));
}
float temp(float celsius){
    float f;
    f=((celsius*9)/5)+32;
    return f;
}
