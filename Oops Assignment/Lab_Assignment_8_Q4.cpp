#include <iostream>

using namespace std;

class student{
public:
    char name[30];
    int rollnum;
public:
    student(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollnum;
    }
    void displayinfo(int m, int s){
    cout<<"\nName: "<<name<<"\nRoll number: "<<rollnum<<"\nPercentage: "<<(float)(m+s)/6;
    }
};

class marks:public student{
private:
    int m1,m2,m3,m4,m5;
public:
    marks(){
    cout<<"Enter marks 1: ";
    cin>>m1;
    cout<<"Enter marks 2: ";
    cin>>m2;
    cout<<"Enter marks 3: ";
    cin>>m3;
    cout<<"Enter marks 4: ";
    cin>>m4;
    cout<<"Enter marks 5: ";
    cin>>m5;
    }
    int rm(){
    return m1+m2+m3+m4+m5;
    }


};
class sports:public marks{
private:
    int sport;
public:
    sports(){
    cout<<"Enter marks in activity: ";
    cin>>sport;
    }
    int ret(){
    return sport;}
    };

class result:public sports{
public:
    result(){

    }
};

int main()
{
    result s;
    s.displayinfo(s.rm(),s.ret());
}