#include<iostream>
using namespace std;
class Area{
    float a;
    public:
    Area(int r){
    a=3.14*r*r;
    } 
    Area(int l,int b){
        a=l*b;
    }
    Area(float br,float h){
     a=0.5*br*h;
    }
    void display(){
        cout<<"The area is: "<<a<<endl;
    }
};
int main(){
    Area cir(3);
    cir.display();
    Area rec(4,5);
    rec.display();
    Area trian(2,5);
    trian.display();
    
}