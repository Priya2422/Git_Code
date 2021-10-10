#include<iostream>
using namespace std;
struct employee{
    char name[20];
    int empid;
    int salary;
    void get(){
        cout<<"Enter employee's name:"<<endl;
        cin>>name;
        cout<<"Enter employee's id:"<<endl;
        cin>>empid;
        cout<<"Enter employee's salary:"<<endl;
        cin>>salary;
  }
  void display(){
        cout<<"Employee's name is: \t"<<name<<endl;
        cout<<"Employee's id is: \t"<<empid<<endl;
        cout<<"Employee's salary is: \t"<<salary<<endl;
  }
};
int main(){
    struct employee e1;
    e1.get();
    e1.display();
}
