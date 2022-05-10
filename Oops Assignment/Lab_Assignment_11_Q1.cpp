#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
private:
	int emp_id;
	char emp_name[30];
	int emp_salary;
public:
	Employee()
	{
		emp_id = 0;
		strcpy(emp_name,"NULL");
		emp_salary = 0;
	}
	Employee(int id,char name[],int sal)
	{
         emp_id = id;
         strcpy(emp_name,name);
         emp_salary = sal;
	}
	friend istream& operator>>(istream& input,Employee &e)
	{
     input>>e.emp_id;
     getchar();
     input.getline(e.emp_name,30);
     input>>e.emp_salary;
	}
	friend ostream& operator<<(ostream& output,Employee &e)
	{
		output<<e.emp_id<<"\n"<<e.emp_name<<"\n"<<e.emp_salary;
	}
};

int main()
{
	class Employee emp;
	cout<<"Enter employee id,name and salary :\n";
	cin>>emp;
	cout<<endl;
	cout<<"Employee id, employee name and employee salary are :\n";
	cout<<emp;
}