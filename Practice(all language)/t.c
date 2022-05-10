#include<stdio.h>
int main(){
	int i,j,swap,n,a[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}

}
int k=n;
if(n%2==0){
for(j=0;j<n/2;j++){
	for(i=0;i<n;i++){
		swap=a[i][j];
		a[i][j]=a[i][j+(k-1)];
		a[i][j+(k-1)]=swap;
	}
	k=k-2;
}
}
else{
	for(j=0;j<(n-1)/2;j++){
	for(i=0;i<n;i++){
		swap=a[i][j];
		a[i][j]=a[i][j+2];
		a[i][j+2]=swap;
	}
}

}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf("%d ",a[i][j]);
	}
printf("\n");	
}
}

