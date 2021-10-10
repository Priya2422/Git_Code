#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
		char name[100];
		int employee_id;
		long salary;
		employee()
		{
            strcpy(name,"Riya");  
			employee_id = 20051705;
			salary = 200000;         
		}
		employee(char n[],int empid, long salary)
		{
	     employee_id=empid;
         this->salary=salary;
         strcpy(name,n);
		}
		employee(employee &e)
		{
			employee_id=e.employee_id;
			salary=e.salary;
            strcpy(name,e.name);
        }
            void show(){
			cout<<"Employee name is :\t"<<name<<endl;
			cout<<"Employee id is :\t"<<employee_id<<endl;
			cout<<"Employee salary is :\t"<<salary<<endl;
		}
};
int main()
{
    cout<<"Employee details"<<endl;
	employee e1;
    e1.show();
	employee e2("Priya",20051700,100000);
    e2.show();
	employee e3(e2);
    e3.show();
	return 0;
}