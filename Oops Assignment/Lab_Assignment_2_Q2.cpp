#include<iostream>
using namespace std;
class student{
    char name[30];
    int roll_no;
    int total_marks;
    public:
    void getInfo(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>roll_no;
        cout<<"Enter marks:";
        cin>>total_marks;
    }
    void display(){
        cout<<"Name of student is:"<<name<<endl;
        cout<<"Roll number is:"<<roll_no<<endl;
        cout<<"Total marks is:"<<total_marks<<endl;

    }
};
int main(){
    student s1;
    s1.getInfo();
    s1.display();
    return 0;
}