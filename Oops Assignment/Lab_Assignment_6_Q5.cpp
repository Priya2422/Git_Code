#include<iostream>
#include<string.h>
using namespace std;
class demo{
    char *name;
    int length;
    public:
    demo(){
        length=0;
        name=new char[length+1];
    
    }
    demo(char *n){
        length=strlen(n);
        name=new char[length+1];
            strcpy(name,n);
        cout<<"Name is "<<name<<endl;
    }
};
int main(){
    char *name="Priya Pandey";
    demo d1(name);
}