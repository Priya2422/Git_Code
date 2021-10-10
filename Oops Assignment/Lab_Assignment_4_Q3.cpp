#include <iostream>
#include <string.h>
using namespace std;
class account
{
public:
    char name[50];
    char branch[50];
    int number;
    float totalamount;

public:
    void getaccinfo()
    {
        cout << "Enter name of account\n";
        cin >> name;
        cout << "Enter name of branch\n";
        cin >> branch;
        cout << "Enter account number\n";
        cin >> number;
        cout << "Enter total amount " << endl;
        cin >> totalamount;
    }
    void displayaccinfo()
    {
        cout << "Name of account is  " << name << endl;
        cout << "Name of branch is  " << branch << endl;
        cout << "Account number is  " << number << endl;
        cout << "Total amount is " << totalamount << endl;
    }
    void withdraw(float a)
    {
        totalamount = totalamount - a;
    }
    void deposit(float a)
    {
        totalamount = totalamount + a;
    }
    void copydetail(char a[50], char b[50], int no, float t)
    {
        strcpy(name, a);
        strcpy(branch, b);
        number = no;
        totalamount = t;
    }
};
int main()
{
    account a1, a2;

    a1.getaccinfo();
    float d, w;
    cout << "Enter value to deposit" << endl;
    cin >> d;
    cout << "Enter value to withdraw" << endl;
    cin >> w;
    a1.withdraw(w);
    a1.deposit(d);
    a1.displayaccinfo();
    a2.copydetail(a1.name, a1.branch, a1.number, a1.totalamount);
    a2.displayaccinfo();
}