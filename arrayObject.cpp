#include<iostream>
using namespace std;
class Program{
    private: int Regno; float Marks;    //private member of class
    public: Program(int R,float M){    //Parameterized constructor of class
        Regno=R;
        Marks=M;
    }
    public: void Display(){         //function of class
        cout<<"\n RegNumber= "<<Regno<<"\t"<<"Marks= "<<Marks;
    }
};
int main(){
    Program obj[3]={{101,450},{102,430},{103,440}}; //Array of Object with manual init
    int i;
    for(i=0;i<3;i++){
        obj[i].Display();  //calling of display function with Arrray of Object 
    }
    return 0;

}
/*
create A classss with name Student_ Management_System
store student data from roll no 1 to 10
Daata includes(Name, RollNo, Percentage)
Display All Data in Reverse order using Array of Object.
*/