#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include <cctype>
#include <algorithm>
using namespace std;
void show()
{
std::string l;
ifstream mf;
mf.open("priya.txt");
while(std::getline(mf,l))
{
cout<<l<<" ";
}
mf.close();
}
void cal();

void upper();

int main()
{
string a;
int p=1;
ofstream mf;
mf.open("priya.txt");
cout<<"Enter your choice: ";
while(p!=0)
{
cin>>a;
mf<<a<<endl;
cout<<"Press 1 for more and 0 otherwise: ";
cin>>p;
}
mf.close();
upper();
cal();
show();
}


void cal()
{
fstream tf;
tf.open("priya.txt");
char arr[100],ch;
int i=0,sum=0,num=0;
while(tf)
{
tf.get(ch);
arr[i]=ch;
i++;
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
i--;
sum=sum+i;
i=0;
num++;
}
}
cout<<"Number of Vowels: "<<num<<endl;
}
void upper()
{
queue<string> l1;
string l;
ifstream mf;
mf.open("priya.txt");
while(std::getline(mf,l))
{
transform(l.begin(),l.end(),l.begin(), ::tolower);
l1.push(l);
}
mf.close();
ofstream ti;
ti.open("priya.txt");
while(!l1.empty())
{
ti<<l1.front()<<endl;
l1.pop();
}
ti.close();
}