#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    public: 
    string name;
    int id, salary;
    virtual int income(){}
};
class regular: public employee
{
    public:
    float da, hra, basic_salary;
    int income()
    {
        // da=0.25*basic_salary;
        // hra=0.75*basic_salary;  // which is basically 2*basic_salary
        salary=2*basic_salary;
        return salary;
    }
};

class part_time: public employee
{
    public: 
    int hour, pph;
    int income()
    {
        salary = hour * pph;
        return salary;
    }
};

int main()
{
    employee *ptr;

    regular r;
    cout<<"Enter name of regular employee: "<<endl;
    cin>>r.name;
    cout<<"Enter id of regular employee: "<<endl;
    cin>>r.id;
    cout<<"Enter basic salary of regular employee: "<<endl;
    cin>>r.basic_salary;

    cout<<"\n";

    part_time p;
    cout<<"Enter name of part-time employee: "<<endl;
    cin>>p.name;
    cout<<"Enter id of part-time employee: "<<endl;
    cin>>p.id;
    cout<<"Enter total work hours of part-time employee: "<<endl;
    cin>>p.hour;
    cout<<"Enter pay per hour for part-time employee: "<<endl;
    cin>>p.pph;

    cout<<"\n";

    cout<<"Dispalying details of regular employee: "<<endl;
    cout<<"Name of regular employee: "<<r.name<<endl;
    cout<<"ID of regular employee: "<<r.id<<endl;
    cout<<"Basic Salary of regular employee: "<<r.basic_salary<<endl;
    ptr=&r;
    cout<<"Salary of regular employee is: "<<ptr->income()<<endl;

    cout<<"\n";

    cout<<"Displaying details of part-time employee: "<<endl;
    cout<<"Name of part-time employee: "<<p.name<<endl;
    cout<<"ID of part-time employee: "<<p.id<<endl;
    cout<<"Total work hours of part-time employee: "<<p.hour<<endl;
    cout<<"Pay per hour of part-time employee: "<<p.pph<<endl;
    ptr=&p;
    cout<<"Salary of part-time employee is: "<<ptr->income()<<endl;

    return 0;
}