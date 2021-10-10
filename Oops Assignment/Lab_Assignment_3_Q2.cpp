#include<iostream>
using namespace std;
void swap(int &x, int &y) {
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x,y;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	cout<<"Before swapping x and y values are: "<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	swap(x,y);
	cout<<"After swapping x and y values are: "<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
}