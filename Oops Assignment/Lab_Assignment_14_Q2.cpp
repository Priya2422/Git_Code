#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter size:";
 cin >> n;
 int a[n];
 for (int i = 0; i < n+2; i++)
 {
 try
 {
 if (i <= n)
 {
 cout << "Enter Element " << i + 1 << ":";
 cin >> a[i];
 }
 else
 throw i;
 }
 catch(int i)
 {
 cout<<"Array out of bound"<<endl;
 }
 }
 return 0;
}