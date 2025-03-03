//Program to create the class with name Student data with function name, Welcome-Message(),this function on execution will display Welcome to MIET jammu.
//Now, we will add 1 more Function with name Validate_Regno(), this function will accept student name and resgistrstion number from student and validate it.
//Valid RegNo's are from 61 to 120

#include<iostream>
using namespace std;
class Student_Data{
    public:
     void Welcome_message(){
        cout << "Welcome to MIET Jammu \n";
    }
    private:
     string Name; 
     int RegNo; 
    public:
     bool Validate_RegNo(){
        cout<<"Enter you name: \n";
        cin>>Name;
        cout<<" Enter you Registration Number: \n";
        cin>>RegNo;
        if (RegNo >= 61 && RegNo <= 120){
            return "True";
        } else {
            return "False";
        }
    }
};
int main(){
    Student_Data obj;
    obj.Welcome_message();
    string res;
    res=obj.Validate_RegNo();
    return 0;
}