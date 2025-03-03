#include<iostream>
using namespace std;
class ArrayProgram{
    private: int a[5];  //Array Declaration
    int b[5]= {1,2,3,4,5};
    public: void display(){
        a[0]=10;     //Initialisation of Array Element at index 0 using Direct Method
        a[1]=5;      //Initialisation of Array Element at index 1 using Direct Method  
        cout<<"\nArray Element at index 0 is "<<a[0];
        cout<<"Array Element at index 1 is "<<a[1];
        cout<<"\n Enter array element ";
        cin>>a[2];
        cout<<"\n Array Element at index 2 is "<<a[2];
        cout<<"\n Array Element of array b at index 0 is "<<b[0];
    }
};
int main(){
    ArrayProgram obj;
    obj.display();
    return 0;
}