 #include<stdio.h>
 void makenondiagonalzero(int a[][10], int i, int j);
 void print(int a[][10], int i, int j);
 int main()
{
  int i, j, rows, columns, a[10][10], Total = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
    makenondiagonalzero(a, i, j);
 
    return 0;
}
 
// Function to change the values of all
// non-diagonal elements to 0
void makenondiagonalzero(int a[][10], int i, int j)
{
    // Traverse all non-diagonal elements
    for (int rows = 0; i < i; rows++) {
        for (int columns = 0; columns < j; columns++) {
            if (rows != columns && rows + columns + 1 != j)
 
                // Change all non-diagonal
                // elements to zero
                a[rows][columns] = 0;
        }
    }
 
    // print resultant matrix
    print(a, i, j);
}
// Function to print the resultant matrix
void print(int a[][10], int i, int j)
{
    for (int rows = 0; rows < i; rows++) {
        for (int columns = 0; columns < j; columns++) {
            printf("%d",a[rows][columns]);
        }
        printf("\n");
    }
}
