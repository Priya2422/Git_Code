
#include <iostream>
using namespace std;
class employee
{
    private:
        int emp_id,emp_salary;
        char name[10];
    public:
    friend istream& operator>>(istream &in, employee &emp)
    {
        cout<<"Enter employee id: ";
        in>>emp.emp_id;
        cout<<"Enter employee Name: ";
        in>>emp.name;
        cout<<"Enter employee salary: ";
        in>>emp.emp_salary;
        return in;
        
    }
    
    friend ostream& operator<<(ostream &out, employee &emp)
    {
        out<<"Employee id is: "<<emp.emp_id<<endl<<"Name: "<<emp.name<<endl<<"Salary: "<<emp.emp_salary<<endl;
        return out;
    }
};
    
 
int main()
{
   employee e1,e2;
   int n;
   cout<<"Enter the number of employees: ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   cout<<"Enter record for employee "<<i<<":"<<endl;
   cin>>e1;
   cout<<"Displaying record of employee "<<i<<":"<<endl;
   cout<<e1;
   }  
}