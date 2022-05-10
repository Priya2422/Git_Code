#include <iostream>
#include <string>

using namespace std;

struct invalidDate : public exception 
{
const char * what() const throw () 
{
    return "Invalid date.";
}
};

struct invalidMonth : public exception 
{
const char * what() const throw () 
{
    return "Invalid month.";
}
};

int main()
{
int day;
int month;
int year;
string month_name;

try 
{
    cout << "Enter mm/dd/yyyy : ";
    cin >>month>>day>>year;

    if (day > 31)
        throw invalidDate();

    if (month == 1) {
        month_name = "January";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 2) {
        month_name = "February";
        if (day > 28)
            throw invalidDate();
    }
    else if (month == 3) {
        month_name = "March";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 4) {
        month_name = "April";
        if (day > 30)
            throw invalidDate();
    }
    else if (month == 5) {
        month_name = "May";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 6) {
        month_name = "June";
        if (day > 30)
            throw invalidDate();
    }
    else if (month == 7) {
        month_name = "July";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 8) {
        month_name = "August";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 9) {
        month_name = "September";
        if (day > 30)
            throw invalidDate();
    }
    else if (month == 10) {
        month_name = "October";
        if (day > 31)
            throw invalidDate();
    }
    else if (month == 11) {
        month_name = "November";
        if (day > 30)
            throw invalidDate();
    }
    else if (month == 12) {
        month_name = "December";
        if (day > 31)
            throw invalidDate();
    }
    else if (month > 12)
        throw invalidMonth();

    cout << month_name << " " << day << "," << year << "." << endl;


}

catch (invalidDate& p)
{
    cout << p.what() << endl;
}
catch (invalidMonth& p)
{
    cout << p.what() << endl;
}

system("pause");
return 0;



}