#include<iostream>
using namespace std;
class time
{
   private:
	int hours;
	int minutes;
   public:
   void fun1(int minutes) throw(int)
   {
       if(minutes<=60){
           throw hours;
       }
       
   }
	void settime(int h, int m)
	{
		hours=h; minutes=m;
	}
	time sum(time);
	void showtime();
};
time time::sum(time TM)
{
	time t;
	t.minutes = minutes + TM.minutes;
	t.hours=t.minutes/60;
	t.minutes=t.minutes%60;
	t.hours += hours + TM.hours;
	return t;
}
void time::showtime()
{
	cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
}
int main()
{
	time t1,t2,t3;
	t1.settime(3,55);
	t2.settime(1,40);
	t3=t1.sum(t2);
	cout<<"\n Time 1 : ";
	t1.showtime();
	cout<<"\n Time 2 : ";
	t2.showtime();
	cout<<"\n Time 3 : ";
	t3.showtime();
    try{
        t1.fun1(3);
    }
    catch(int i){
        cout<<"\nException caught";
    }
	return 0;
}