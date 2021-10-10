#include<iostream>
using namespace std;
class FindVolume {
	public:
		void volume(int r) {
			cout<<"volume of cube is: "<<r*r*r<<endl;
		}
		void volume(int r,int h) {
			cout<<"volume of cylinder is: "<<3.14*r*r*h<<endl;
		}
		void volume(double r) {
			cout<<"volume of sphere is: "<<((4*3.14*r*r*r)/3)<<endl;
		}
};
int main() {
	FindVolume v;
	v.volume(5);
	v.volume(4,7);
	v.volume(6.2);
	return 0;
}