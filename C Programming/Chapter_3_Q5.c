#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    printf("Lowercase");
    else
    printf("Not Lowercase");
}