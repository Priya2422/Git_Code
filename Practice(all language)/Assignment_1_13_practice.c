#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,n,*m,*k;
printf("Enter size: ");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(n));
for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
}
k=p[0];
p[0]*=p[1];
printf("%d\n",p[0]);
p[0]=k;
for(int i=1;i<n-1;i++){

    m=p[i];
    p[i]=p[i-1]*p[i+1];
    printf("%d\n",p[i]);
    p[i]=m;
}
p[n-1]*=p[n-2];
printf("%d",p[n-1]);
free(p);
return 0;
}