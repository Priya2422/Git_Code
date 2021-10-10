#include<iostream>
using namespace std;
class FindVolume {
	public:
		inline int cube(int r) {
		             return r*r*r;
		}
		inline float cylinder(int r,int h) {
			return 3.14*r*r*h;
		}
		inline float sphere(float r) {
			return (4*3.14*r*r*r)/3;
		}
};
int main() {
	FindVolume v,v1,v2;
	cout<<"The volume of cube is: "<<v.cube(5)<<endl;
	cout<<"The volume of cylinder is: "<<v1.cylinder(4,7)<<endl;
	cout<<"The volume of sphere is: "<<v2.sphere(6.2);
	return 0;
}