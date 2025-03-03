// program to demonstrate working of function with no return type and no parameter :
// oops features(namespace, class, object, access speciifer, member variables and functions)
#include<iostream>
using namespace std;
class Program
{
public: void message(){
    cout<<"Hi";
}
};
int main(){
   Program obj; 
   obj.message();
    return 0;
}