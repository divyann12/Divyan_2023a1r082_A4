#include<iostream>
using namespace std;
class PayApp{
    private: float amount,dis;
    public: void Accept(){
        cout<<"Enter Amount:";
        cin>>amount;
    }
    public: void Validate(){
        if(amount>0){
            cout<<"\n Amount is Valid";
            Discount();
            Display();
        }
    }
    public: void Discount(){
        dis= amount/100*10;;
    }
    public: void Display(){
        cout<<"\nYour Payable amount is:"<<amount-dis;
    }
};
int main(){
    PayApp obj;
    obj.Accept();
    obj.Validate();

    return 0;
}