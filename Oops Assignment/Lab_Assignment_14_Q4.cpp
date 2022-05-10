#include<iostream>
using namespace std;
class Test {
	public :
		int print(int x) throw(int, char)
		{
		if(x == 0) {
			throw 4;
		}
		if(x == 1) {
			throw 'p';
		}
		if(x == 2) {
			throw 3.5;
		}
		}
};
int main() {
	try {
		Test t1;
		t1.print(0);
	}
	catch(int x) {
		cout<<"Integer Exception Handled"<<endl;
	}
	catch(char x) {
		cout<<"Character Exception Handled"<<endl;
	}
	catch(double x) {
		cout<<"Double Exception Handled"<<endl;
	}
	return 0;
}