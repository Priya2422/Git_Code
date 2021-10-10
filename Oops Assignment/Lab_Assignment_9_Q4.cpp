#include<iostream>
#include<conio.h>
using namespace std;
 int const size=50;
  class ballot
  {
      int candidate;
      int vote[size];
      int ballt[3];
      static int spballot;
     public:
      void getdisplay(void);
      ballot()
      {
          getdisplay();
      };
      ~ballot()
      {

      };
  };
  int ballot ::spballot;
  void ballot :: getdisplay(void)
   {
      cout<<"\n Enter how many candidates you want to make :";
      cin>>candidate;
      static int a,b,c;
       a=0;
       a=b=c;
      cout<<"Enter digit from 1 to 3 :\t"<<endl;
      cout<<"1= Narendra Modi (BJP)"<<endl<<"2= Sonia Gandhi (Congress)"<<endl<<"3= Arvind Kejriwal (AAP)"<<endl;
      for(int i=0;i<candidate;i++)
       {
           cin>>vote[i];
           switch(vote[i])
           {
              case 1:
                ballt[a];
                 a++ ;
                 break;
              case 2:
                ballt[b];
                 a++ ;
                 break;
              case 3:
                ballt[c];
                 a++ ;
                 break;
              default:
                 ++spballot;
           }
       }
   int choice;
    do
  {
    cout<<"\n Choices Available \n";
    cout<<"\n 1.)Scored by Ballot A :\n \t";
    cout<<"\n 2.)Scored by Ballot B :\n \t";
    cout<<"\n 3.)Scored by Ballot C :\n \t";
    cout<<"\n 4.)Spoilt Ballot :\n \t";
    cout<<"\n 5.)Exit \n";
    cout<<"Enter your choice : \t";
    cin>>choice;
     switch (choice)
     {
        case 1:
         cout<<"Scored by Ballot A is \t"<<a ;
         break;
        case 2:
         cout<<"Scored by Ballot B is \t"<<b;
         break;
        case 3:
         cout<<"\n Scored by Ballot C is \t"<<c;
         break;
        case 4:
         cout<<"\n Spoilt Ballots were \t"<<spballot;
         break;
     }   
  } while (1);
};

int main()
{
    ballot b1;
    b1.getdisplay();
}