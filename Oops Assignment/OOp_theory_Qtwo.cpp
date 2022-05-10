#include <iostream>
using namespace std;
class Student{

    protected:
	char name[50];
	int roll;
	char branch[50];
	char university[50];
	public:
	Student(){}
	 void getdata(){
	 	cout<<"Enter name of the student: ";
	 	cin>>name;
		cout<<"Enter roll number of the student: ";
		cin>>roll;
		cout<<"Enter branch of the student: ";
	 	cin>>branch;
	 	cout<<"Enter university name of the student: ";
	 	cin>>university;
	}
	void display(){
		cout<<"Name of the student is: "<<name<<endl;
		cout<<"Roll number the student is: "<<roll<<endl;
		cout<<"Branch of the student is: "<<branch<<endl;
		cout<<"University name of the student is: "<<university<<endl;
	}
};
class Marks:virtual public Student
{
	protected:
    int math, phy, chem;
    public:
	Marks(){}


	void getmarks(){
		cout<<"Enter marks in maths: ";
		cin>>math;
		cout<<"Enter marks in physics: ";
		cin>>phy;
		cout<<"Enter marks in chemistry: ";
		cin>>chem;
	}
	void putmarks(){
		cout<<"Marks in maths is: "<<math<<endl;
		cout<<"Marks in physics is: "<<phy<<endl;
		cout<<"Marks in chemistry is: "<<chem<<endl;
	}
};
class Sports:virtual public Student
{
	protected:
	int score;
    public:
	Sports(){}
	void getscore(){
		score=-1;
		while(score<0 || score>100){
			cout<<"Enter score in sports: ";
			cin>>score;
		}
	}
	void putscore(){
		cout<<"Score in sports is: "<<score<<"\n";
	}
};


class Result :public Marks, public Sports
{
	private:
	int total;
	int avg;
    public:
	Result(){}
	void findTotal(){
		int total=score+math+phy+chem;
		cout<<"Total marks (in subjects + in sports): "<<total<<endl;
	}
	void findAvg(){
		int avg=(math+phy+chem)/3;
		cout<<"Average is: "<<avg<<endl;
	}
};


int main(){
	Result result;
	cout<<"\n----------Student 1----------"<<endl;
	result.getdata();
	result.getmarks();
	result.getscore();
	result.display();
	result.putmarks();
	result.putscore();
	result.findTotal();
	result.findAvg();
	Result result1;
	cout<<"\n----------Student 2----------"<<endl;
	result1.getdata();
	result1.getmarks();
	result1.getscore();
	result1.display();
	result1.putmarks();
	result1.putscore();
	result1.findTotal();
	result1.findAvg();
	system("pause");
	return 0;
}