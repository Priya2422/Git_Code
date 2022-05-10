#include <iostream>
using namespace std;

template <class T, class U, class V>
void display(T x, U y, V z)
{
    cout<<"x value is \t: "<<x<<endl;
    cout<<"y value is \t: "<<y<<endl;
    cout<<"z value is \t: "<<z<<endl;
}

int main()
{
    cout<<"First call:-"<<endl;
    display <int, double, float> (5, 6.99, 2.3f);
    cout<<"Second call:-"<<endl;
    display <double, int, char>  (3.222, 20, 'X');
    cout<<"Third call:-"<<endl;
    display(5.9999, 'Q', 7.9f);
    return 0;
}