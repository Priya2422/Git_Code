    #include<stdio.h>
    #include<stdlib.h>
    int main(){
        int M,N,a;
    int **A = (int **)malloc(M * sizeof(int *));  
    for (int r = 0; r < M; r++)
    {
        A[r] = (int *)malloc(N * sizeof(int));
    }
    for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        scanf("%d",A[i][j]);
    }
    }
    for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
for(int k=j+1;k<N;k++){
    if(A[i][j]>A[i][k]){
  a=A[i][j];
A[i][j]=A[i][k];
A[i][k]=a;
}      
}
}
}
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        printf("%d",A[i][j]);
    }
}
        return 0;
    }