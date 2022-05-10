#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class String
{
  char name[23];
  public :
  String()
  {
    name[23]='P';
  }
  String(char s[])
  {
    strcpy(name,s);
  }
  String(String &s)
  {
    strcpy(name,s.name);
  }
friend string operator +(string s1, string s2);
friend ostream &operator <<(ostream  &out, string &s);
};
ostream &operator <<(ostream &out , string &s)
{
  out <<"\t"<<s.name<<endl;
  return(out);
}
string operator +(string s1, string s2)
{
  string temp(s1);
//strcat(temp.name,"");
  strcat(temp.name, s2.name);
  return(temp);
}
void main()
{
  string s1("KIIT ");
  string s2("KISS");
  string s3=s1+s2;
  cout<<"\nFIRST STRING ="<<s1
      <<"\nSECOND STRING ="<<s2;
  cout<<"\nCONCATENATED THIRD STRING ="<<s3;
  getch();
}