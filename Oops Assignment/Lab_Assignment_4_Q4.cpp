#include<iostream>
using namespace std;
int prod(int a,int b,int c=4,int d=5)
{
    return(a*b*c*d);
}
int main()
{
    cout<<"The product of the given variables are: "<<prod(3,2)<<endl;
    cout<<"The product of the given variables are: "<<prod(3,2,7)<<endl;
    cout<<"The product of the given variables are: "<<prod(3,2,7,6)<<endl;
}