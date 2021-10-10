#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();
int main()
{
    int n;
    goodmorning();
    goodafternoon();
    goodevening();
return 0;
}
void goodmorning(){
    printf("Good Morning!\n");
}
void goodafternoon(){
    printf("Good Afternoon!\n");
}
void goodevening(){
    printf("Good Evening!\n");
}