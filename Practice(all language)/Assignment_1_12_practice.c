/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
 int temp,n,j=0,nextgreat; 
printf("enter the size of array :"); 
scanf("%d",&n); 
int a[n]; 
printf("enter the values in array :"); 
for(int x=0;x<n;x++) 
{ 
scanf("%d",&a[x]); 
} 
for(int y=0;y<n;y++) 
{ 
nextgreat = 0; 
for(int x=y;x<n;x++) 
{ 
if(a[y]<a[x]) 
{ 
nextgreat = a[x]; 
break; 
} 
} 
if(nextgreat == 0) 
{ 
printf("\nnext greater number for %d is :%d",a[y],-1); } 
else 
{ 
printf("\nnext greater number for %d is :%d",a[y],nextgreat); } 
} 
    return 0;
}
