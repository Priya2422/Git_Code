#include<stdio.h>
float an(float a,float b,float c);
int main(){
    int c,d,e;
    printf("Enter the values:\n");
    scanf("%d %d %d",&c,&d,&e);
    an(c,d,e);
    printf("The average is:\n%f",an(c,d,e));
}
float an(float a,float b,float c){
    float sum=0;
    float avg=1;
    sum=a+b+c;
    avg=sum/3;
    return avg;
}