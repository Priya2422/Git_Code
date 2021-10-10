#include<iostream>
#include<cstring>
using namespace std;
class Test {
	char *name;
	int length;
	public:
		Test()
		{
			length=0;
			name=new char[length+1];
		}
		Test(char *n) //dynamic costructor
		{ 
			length=strlen(n);
			name=new char[length+1];
			if(name == NULL)
			cout<<" Memory not allocated ";
			strcpy(name, n);
			cout<<"Name is "<<name<<endl;
		}
~Test() //destructor
{ 
	cout<<" Program terminated succesfully "<<endl;
	delete name;
}
};
int main() {
	char *name = "Priya";
	Test t1(name);
	return 0;
}