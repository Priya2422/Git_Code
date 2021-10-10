#include <iostream>
using namespace std;
struct product
{
char code[100];
char name[100];
int price,quantity,sl_no;
int total;
void input()
{
cout << "Enter serial no:";
cin >> sl_no;   
cout << "Enter code:";
cin >> code;
cout << "Enter name:";
cin >> name;
cout << "Enter price:";
cin >> price;
cout << "Enter quantity:";
cin >> quantity;
}
int tot()
{
return price*quantity;
}
void display()
{
cout<<sl_no<<"\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t\t"<<tot();
}
};
int main()
{
product p[100];
int n;
cout<<"Enter the number of product:";
cin >> n;
int prod[n];
for(int i=0;i<n;++i)
{
    cout<<endl;
cout<<"Product"<<i+1<<":" << endl;
p[i].input();
}
cout<<endl
<<"SL.No\tCode\tName\tPrice\tQuantity\tTotal"<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
struct product *pe;
pe=p;
for(int i=0;i<n;++i,++pe)
{
pe->display();
cout<<endl;
}
}