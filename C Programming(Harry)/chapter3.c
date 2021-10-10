#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter marks of 1st sub:");
    scanf("%f",&a);
    printf("Enter marks of 2st sub:");
    scanf("%f",&b);
    printf("Enter marks of 3st sub:");
    scanf("%f",&c);
    float total=0;
    total=(a+b+c)/3;
    printf("%f",total);
    if(a>=33 && b>=33 && c>=33 && total>=40){
        printf("Student is pass");
    }
    else
    printf("Student is fail");
    return 0;
}