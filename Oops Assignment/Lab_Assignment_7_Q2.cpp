#include<iostream>
using namespace std;
class student {
	public:
	char name[30];
	int rollnumber;
	int age;
	public:
		student() {
			int marks[5];
				for(int i=0;i<5;++i)
			{
				cout<<"Subject (out of 100)"<<i+1<<":";
				cin>>marks[i];
			}
		}
		void input() {
			cout<<"Enter student name "<<endl;
			cin>>name;
			cout<<"Enter student roll number "<<endl;
			cin>>rollnumber;
			cout<<"Enter student age "<<endl;
			cin>>age;
		}
};
class Test:public student {
	public:
		void display() {
			cout<<"Name of student is : "<<name<<endl;
			cout<<"Roll number of student is : "<<rollnumber<<endl;
			cout<<"Age of student is : "<<age<<endl;
		}
};
int main() {
	Test t1;
	t1.input();
	t1.display();
	return 0;
}