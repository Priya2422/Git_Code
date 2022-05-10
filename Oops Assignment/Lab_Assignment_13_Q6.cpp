#include<iostream>
using namespace std;
template<class T>
void f(T x,T y){
    cout<<"Print template"<<endl;
    cout<<"x and y values are: "<<x<<"\t"<<y<<endl;
}
void f(int X,int Y){
    cout<<"Print Non-template"<<endl;
    cout<<"x and y values are: "<<X<<"\t"<<Y<<endl;

}
int main(){
f(2,5);
f('u','v');
f(2,'u');
return 0;
}