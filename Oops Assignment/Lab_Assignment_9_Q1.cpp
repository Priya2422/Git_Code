#include<iostream>
using namespace std;
class ABC{
	public:
		void display() {
			cout<<"Class ABC \t"<<endl;
		}
};
class abc{
	public:
		void show() {
			cout<<"Class abc \t"<<endl;
		}
};
class xyz {
	ABC o1;
	abc o2;
	public:
		void test() {
			o1.display();
			o2.show();
		}
};
int main()
{
	xyz o3;
	o3.test();
	return 0;
}