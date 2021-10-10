#include<iostream>
using namespace std;
class student{
    char name[30];
    int roll_no;
    int total_marks;
    int marks[5];
    int sum=0;
    public:
    void getInfo(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>roll_no;
        cout<<"Enter total marks:";
        cin>>total_marks;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Subject(out of 100) " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void display(){
        cout<<"Name of student is:"<<name<<endl;
        cout<<"Roll number is:"<<roll_no<<endl;
        cout<<"Total marks is:"<<total_marks<<endl;
         for (int i = 0; i < 5; ++i)
        {
            sum += marks[i];
        }
        cout<<"The total marks out of 500:"<<sum<<endl;
        cout<<"The Percentage is:"<<(sum*100)/(total_marks)<<endl;
        
    }

};
int main(){
    student s1;
    s1.getInfo();
    s1.display();
    return 0;
}