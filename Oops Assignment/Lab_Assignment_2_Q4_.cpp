#include <iostream>
using namespace std;

class Complex {
    public:
    float real;
    float imag;
    
    void getReal() {
        cin >> real;
    }
    
    void getImag() {
        cin >> imag;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
	
	int size = 10;
	
	Complex comp[size];
	
	for (int i = 0; i < size; i++) {
	    cout << "Input Complex:- " << i+1 << endl;
	    cout << "Real part : ";
	    comp[i].getReal();
	    cout << "Imaginary part : ";
	    comp[i].getImag();
	}
	
	cout << endl;
	
	for (int i = 0; i < size; i++) {
	    cout << "Complex No. " << i+1 << " : ";
	    comp[i].display();
	}
	
	
	return 0;
}