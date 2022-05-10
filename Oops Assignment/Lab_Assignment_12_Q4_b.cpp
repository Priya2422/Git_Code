#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    public: 
    string name;
    int id, salary;
    virtual void income()=0;
};

class regular: public employee
{
    public:
    float da, hra, basic_salary;
    void inputregularemployees()
    {
    cout<<"\n----------Input details of regualr employees----------\n"<<endl;
    cout<<"\nEnter name of regular employee: "<<endl;
    cin>>name;
    cout<<"Enter id of regular employee: "<<endl;
    cin>>id;
    cout<<"Enter basic salary of regular employee: "<<endl;
    cin>>basic_salary;
	}
	void displayregularemployees()
	{
	cout<<"\n----------Displaying details of regular employee----------\n"<<endl;
    cout<<"Name of regular employee: "<<name<<endl;
    cout<<"ID of regular employee: "<<id<<endl;
    cout<<"Basic Salary of regular employee: "<<basic_salary<<endl;
	}
    void income()
    {
        // da=0.25*basic_salary;
        // hra=0.75*basic_salary;  // which is basically 2*basic_salary
        salary=2*basic_salary;
        cout<<"The Salary of the regular employee is: "<<salary<<endl;
    }
};

class part_time: public employee
{
    public: 
    int hour, pph;
    void inputparttimeemployees()
    {
    cout<<"\n-----------Input details of part-time employees----------\n"<<endl;
    cout<<"\nEnter name of part-time employee: "<<endl;
    cin>>name;
    cout<<"Enter id of part-time employee: "<<endl;
    cin>>id;
    cout<<"Enter total work hours of part-time employee: "<<endl;
    cin>>hour;
    cout<<"Enter pay per hour for part-time employee: "<<endl;
    cin>>pph;
	}
	void displayparttimeemployees()
	{
	cout<<"\n-----------Displaying details of part-time employee----------\n"<<endl;
    cout<<"Name of part-time employee: "<<name<<endl;
    cout<<"ID of part-time employee: "<<id<<endl;
    cout<<"Total work hours of part-time employee: "<<hour<<endl;
    cout<<"Pay per hour of part-time employee: "<<pph<<endl;
	}
    void income()
    {
        salary = hour * pph;
        cout<<"Salary of part-time employee is: "<<salary<<endl;
    }
};

int main()
{
   regular r;
   r.inputregularemployees();
   r.displayregularemployees();
   r.income();
   part_time p;
   p.inputparttimeemployees();
   p.displayparttimeemployees();
   p.income();
    return 0;
}