#include<iostream>
using namespace std;
template<class T>

void fun(T x, T y)
{
}
void swap(int &x, int &y)
	{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
template<>
void fun<int> (int x, int y)
{
	cout<<"Value of x & y before swap is : "<<x<<"\t"<<y<<endl;
	swap(x, y);
	cout<<"Value of x & y after swap is : "<<x<<"\t"<<y<<endl;
}

template<>
void fun<double> (double x, double y)
{
	cout<<"Value of x & y before swap is : "<<x<<"\t"<<y<<endl;
	swap(x,y);
	cout<<"Value of x & y after swap is : "<<x<<"\t"<<y<<endl;
}

int main()
{
	fun <int> (2,4);
	fun <double> (3.55,7.22);
}