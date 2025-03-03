/* Program to demonstrate working and execution sequence of constructor, destructor and other functions.
*/
#include<iostream>
using namespace std;
class program{
    private: int a;
    public: void fun1(){
        cout<<"function2";
    }
    public: void fun2(){
        cout<<"function2";
    }
    public: program(){ //constructor
        a=5;
        cout<<"\na= "<<a;
    }
    public: ~program()
    {
        cout<<"\n Destructor called";
    }
};
int main(){
    program obj;
}