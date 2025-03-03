#include<iostream>
using namespace std;
class Login_Detail{
    private: int password,dis;
    public: void validate(){
        cout <<"Enter credentials:";
        cin>>password;
        if(password==1234){
            cout <<"PASSWORD IS VALID";
            Display();
        }else{
            cout<<"Enter correct password!!!";
        }
    }
    public: void Display(){ 
       
        cout<<"\nWelcome to My App";       
    }

};
int main(){
    Login_Detail obj;
    obj.validate();

    return 0;
}