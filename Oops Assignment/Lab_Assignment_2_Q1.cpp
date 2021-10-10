#include<iostream>
using namespace std;
class book{
    int isbn;
    char name_of_the_book[30];
   char name_of_the_author[30];
   char name_of_the_publisher[30];
   public:
   void getBookInfo(){
       cout<<"The isbn no of the book is:"<<endl;
       cin>>isbn;
       cout<<"The name of the book is:"<<endl;
       cin>>name_of_the_book;
       cout<<"The author of the book is:"<<endl;
       cin>>name_of_the_author;
       cout<<"The publisher of the book is:"<<endl;
       cin>>name_of_the_publisher;
   }
   void display(){
       cout<<"The isbn no is: "<<isbn<<endl;
       cout<<"The name of book is: "<<name_of_the_book<<endl;
       cout<<"The author of book is: "<<name_of_the_author<<endl;
       cout<<"The publisher of book is: "<<name_of_the_publisher<<endl;

   }
};
int main(){
    book b1;
    b1.getBookInfo();
    b1.display();
}

