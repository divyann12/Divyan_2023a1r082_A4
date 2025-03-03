#include<iostream>
using namespace std;
class Program1 {
    private : int pin;
public : int Validate() // Function with  return type and  no paramter
{
    cout<<"Enter your pin";
    cin>>pin;
    if(pin == 1234)     {
        return 1;     }
    else      {
        return 0;     } }               //(Amount is formal parameter)
        // Paramter defined at function defination
public :void Display_Balance(int Amount) //Function with no return type and parameter
{
    cout<<"\n Your Balance is "<<Amount; } 
public : void Fun() {
    cout<<"Hi"; } }; // Terminator or end statement
int main() {
    Program1 obj;
    int res;
    int amt =10000;
    obj.Fun();
    res=obj.Validate();
    if(res==1){
        cout<<"Authentication Successful";
        obj.Display_Balance(amt);     } //amt is actual parameter(defined at function 
    else{                                //calling)
       cout<<"Authentication Fail";      }
return 0; }