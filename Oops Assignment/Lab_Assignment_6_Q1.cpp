#include<iostream>
using namespace std;
class employee{
    char name[50];
    int empid,salary;
    public:
    employee(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter empid: ";
        cin>>empid;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    employee(char* name,int empid,int salary){
        this->name=name;
        this->empid=empid;
        this->salary=salary;
    }
    employee(employee &e){
        name[50]=e.name[50];
        empid=e.empid;
        salary=e.salary;
        cout<<";
    }
    void show(){
        cout<<"The employee name is: "<<name<<endl;
        cout<<"The empid is: "<<empid<<endl;
        cout<<"The salary is: "<<salary<<endl;
    }
};
int main(){
    employee e1;
    employee e2("P",20051,100000);
    employee e3(e2);
    employee e4;
    e4.show();

}