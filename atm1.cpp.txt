//Program to demonstrate the working of all types of functions
#include<iostream>
using namespace std;
class ATM_App{
public: void Welcome() 
{
cout<<"Welcome to ATM.";
}
private : int pin;
public : string Validate()
{
    cout<<"\n Enter Your pin";
    cin>>pin;
    if(pin ==123){
        return "True";
    }
    else{
        return "False";
    }
}
private : float wamt;
public : float Withdraw(float Bamt)
{
cout<<"\n Enter Amount u want to withdraw";
cin>>wamt;
if(wamt>Bamt)
{
    cout<<"\n Insufficient Balance";
}
else {
    return Bamt-wamt;
}
}
public : void Display_Balance(float amt)
{
    cout<<"\n Your Balance is"<<amt;
}
};
int main(){
    ATM_App obj;
    string res;
    float res1;
float amt1 =10000.50;
    obj.Welcome();
    res=obj.Validate();
    if(res=="True"){
        cout<<"\n Login Successful";
        res1 = obj.Withdraw(amt1);
        obj.Display_Balance(res1);
    }
    else{
        cout<<"\n Login Failed";
    }
    return 0;
}