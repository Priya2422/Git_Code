#include<stdio.h>
#include<string.h>
int reverseword(char *a,int n){
int rev;
for (int i=0;i<n/2;i++){
rev=a[i];
a[i]=a[n-i-1];
a[n-i-1]=rev;
} 
}
int main()
{
    char ch[30];
    gets(ch);
    int n=strlen(ch);
   reverseword(ch,n);
   printf("%s",ch);
return 0;
}