#include<iostream>
using namespace std;
template < class T>
class Swapper{
	private:
		T m1, m2;
	public:
		Swapper(T t1, T t2){
			m1 = t1;
			m2 = t2;
		}
		void display(){
			cout<<"m1 = "<<m1<<" and m2 = "<<m2<<endl;
		}
		void swapp(){
			T temp;
			temp = m1;
			m1 = m2;
			m2 = temp;
		}
};
int main(){
	Swapper <int>int_swap(3,5);
	Swapper <float>float_swap(3.222, 5.333);
	cout<<"Before swapping integer :"<<endl;
	int_swap.display();
	cout<<"Before swapping float :"<<endl;
	float_swap.display();
	int_swap.swapp();
	float_swap.swapp();
	cout<<"After swapping integer :"<<endl;
	int_swap.display();
	cout<<"After swapping float :"<<endl;
	float_swap.display();
	return 0;
}