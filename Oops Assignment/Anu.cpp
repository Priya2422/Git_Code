#include<iostream>
using namespace std;
class A
{
    int b;
    static int c1;
    static int c2;
    public:
    void input();
    void output();
    void display();
};
int A::c1;
int A::c2;
    void A::input()
    {
        cin>>b;
        c1++;
    }
    void A::output()
    {
        cout<<"Integer value = "<<b<<endl;
        c2++;
    }
    void A::display()
    {
        cout<<"count of input function is:"<<c1<<endl;
        cout<<"count of output function is:"<<c2<<endl;
    }
int main()
{
    A ob1;
    ob1.input();
    ob1.input();
    ob1.output();
    ob1.display();
    return 0;
}