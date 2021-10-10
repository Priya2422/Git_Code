#include<iostream>
 namespace std;
 
const int MAX = 100;
 
// Function to print the resultant matrix
void print(int mat[][MAX], int n, int m)
{
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<mat[i][j] << " ";
        }
        cout<<endl;
    }
}
 
// Function to change the values of all
// non-diagonal elements to 0
void makenondiagonalzero(int mat[][MAX], int n, int m)
{
    // Traverse all non-diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i != j && i + j + 1 != n)
 
                // Change all non-diagonal
                // elements to zero
                mat[i][j] = 0;
        }
    }
 
    // print resultant matrix
    print(mat, n, m);
}
 
// Driver Code
int main()
{
    int mat[][MAX] = { { 2, 1, 7 },
                       { 3, 7, 2 },
                       { 5, 4, 9 } };
 
    makenondiagonalzero(mat, 3, 3);
 
    return 0;
}