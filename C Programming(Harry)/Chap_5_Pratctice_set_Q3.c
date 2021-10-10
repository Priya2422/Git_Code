#include<stdio.h>
float body(float mass);
int main()
{
    float m;
    printf("Enter the mass of the body:\n");
    scanf("%f",&m);
    body(m);
    printf("The force is: %f",body(m));
return 0;
}
float body(float mass){
    float force;
    force=mass*9.8;
    return force;
}