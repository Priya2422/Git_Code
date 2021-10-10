#include <iostream>
#include<string.h>
using namespace std;
class cricket{
    int runs,innings,not_out;
    char name[50];
    public:
 float avg;
    cricket(int runs,int innings, int not_out,char n[]){
       this->runs=runs;
       this->innings=innings;
       this->not_out=not_out;
       strcpy(name,n);
    }
    void calculate(){
    float avg=runs/(innings-not_out);
}
public:
void show(){
    cout<<"Name of player: "<<name<<endl;
    cout<<"Runs obtained: "<<runs<<endl;
    cout<<"Innings: "<<innings<<endl;
    cout<<"Notouts: "<<not_out<<endl;
    cout<<"Batting average: "<<avg<<endl;
}
};
int main(){
    cout<<"Player's details: "<<endl;
    cricket c1(8430,120,15,"Rohit Sharma");
    c1.calculate();
    c1.show();
     cricket c2(3230,60,18,"KL Rahul");
     c2.calculate();
    c2.show();
    
}