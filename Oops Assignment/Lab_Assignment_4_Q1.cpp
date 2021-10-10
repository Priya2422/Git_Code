#define PI 3.14
#include<iostream>
using namespace std;
inline int circle(int r) {
	return PI*r*r;
}
inline int triangle(int b, int h) {
	return 0.5*b*h;
}
int main() {
	cout<<"Area of circle is \t"<<PI*8*8<<endl;
	cout<<"Area of triangle is \t"<<0.5*8*9<<endl;
	return 0;
}