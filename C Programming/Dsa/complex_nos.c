#include<stdio.h>
void addition(int,int,int,int);
void substraction(int,int,int,int);
void multiply(int,int,int,int);
void division(int,int,int,int);
int main()
{
    
    int a,b,c,d;
    printf("Enter real numbers:");
    scanf("%d %d",&a,&c);
    printf("Enter imaginary numbers:");
    scanf("%d %d",&b,&d);
    printf("Sum of complex numbers %d+%di and %d+%di:-\t",a,b,c,d);
    addition(a,b,c,d);
    printf("\nSubstraction of complex numbers %d+%di and %d+%di:-\t",a,b,c,d);
    substraction(a,b,c,d);
    printf("\nProduct of complex numbers %d+%di and %d+%di:-\t",a,b,c,d);
    multiply(a,b,c,d);
    printf("\nDivision of complex numbers %d+%di and %d+%di:-\t",a,b,c,d);
    division(a,b,c,d);
return 0;
}
void addition(int a,int b,int c,int d){
    int real=0,imag=0;
    real=a+c;
imag=b+d;
printf("%d+%di",real,imag);
}
void substraction(int a,int b,int c,int d){
int real=0,imag=0;
real=a-c;
imag=b-d;
if(imag<0){
printf("%d%di",real,imag);
}
else{
    printf("%d+%d",real,imag);
}
}
 
void multiply(int a,int b,int c,int d){
    int real=0,imag=0;
    real=(a*c - b*d);
    imag=(a*d + b*c);
    if(imag<0)
    printf("%d%di",real,imag);
    else
    printf("%d+%di",real,imag);
}
void division(int a,int b,int c,int d){
    float real,imag;
    real=(float)(a*c + b*d)/(c*c + d*d);
    imag=(float)(b*c - a*d)/(c*c + d*d);
    if(imag<0){
        printf("%f%fi",real,imag);
    }
    else
    printf("%f+%fi",real,imag);

}