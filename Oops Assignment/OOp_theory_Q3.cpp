#include <iostream>
using namespace std;

class Feet {
   public:
    float feet;
    Feet(float f) { feet = f; }
    float get_data() { return (feet); }

    void show() { cout << feet << " feet" << endl; }
};

class Inch {
   public:
    float inch;
    Inch() {}
    Inch(Feet f) { inch = f.get_data() * 12; }
    
    void operator=(Feet f) { inch = f.get_data() * 12; }

    void show() { cout << inch << " inches" << endl; }
};

int main() {
    // Creating object of class Feet
    Feet p(10);
    // Constructor
    Inch q(p);

    // Conversion
    Inch r;
    r = p;

    p.show();
    q.show(); // constructor
    r.show(); // conversion

    return 0;
}