#include <iostream>
using namespace std;

class Validate_Email{
    string email_address;
    
    public:
    void check(){
        cout<<"Enter email address: ";
        cin>>email_address;
        int cnt{};
        for(int i = 0;i<email_address.size();++i){
            if(email_address[i]=='@'){
                ++cnt;
            }
        }
        
        if(cnt==0){
            cout<<"Invalid email address"<<endl;
        }
        
        else{
            string t = "moc.";
            string f;
            for(int i = email_address.size()-1;i>email_address.size()-5;--i){
                f.push_back(email_address[i]);
            }
            
            
            if(f==t){
                cout<<"Valid Email Address"<<endl;
            }
            else{
                cout<<"Invalid email address"<<endl;
            }
        }
        
    }
};

int main()
{
    Validate_Email a;
    a.check();

    return 0;
}