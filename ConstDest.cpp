/*
Program in cpp to create a class with name Area, default constructor of class which set radius constructor of class
which set radius value  and function() with name calculate(),this function will calculate(), this function will calculate Area
of circle(3.24* RAd*Rad), finally create destructor to free memory of used variables
*/
#include <iostream>
using namespace std;

class Area {
private:
    double radius;

public:
    // Default constructor
    Area() {
        radius = 0;
    }

    // Parameterized constructor
    Area(double r) {
        radius = r;
    }

    // Function to calculate area of circle
    void calculate() {
        double area = 3.24 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    // Destructor
    ~Area() {
        cout << "Destructor called, memory freed." << endl;
    }
};

int main() {
    Area a1; // Default constructor
    a1.calculate();
    
    Area a2(5.0); // Parameterized constructor
    a2.calculate();
    
    return 0;
}