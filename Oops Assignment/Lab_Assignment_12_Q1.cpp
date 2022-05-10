#include <iostream>
using namespace std;
class shape
{
    public: 
    float virtual area(){}
};

class circle: public shape
{
    public: 
    float area()
    {
        return 3.14*2*2;
    }
};

class square: public shape
{
    public: 
    float area()
    {
        return 2*2;
    }
};

class triangle: public shape
{
    public: 
    float area()
    {
        return 0.5*2*4;
    }
};

int main()
{
    shape *sh;
    circle c;
    sh=&c;
    cout<<"Area of circle: "<<sh->area()<<endl;
    square s;
    sh=&s;
    cout<<"Area of square: "<<sh->area()<<endl;
    triangle t;
    sh=&t;
    cout<<"Area of triangle: "<<sh->area()<<endl;
}