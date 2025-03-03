#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
private:
    int id;
    string name;
    int age;

public:
    // Constructor
    Student(int sId, string sName, int sAge) {
        id = sId;
        name = sName;
        age = sAge;
    }

    // Display student details
    void displayStudent() {
        cout << "Student ID: " << id << "\nName: " << name << "\nAge: " << age << "\n";
    }
};

// Course class
class Course {
private:
    int courseID;
    string courseName;
    int credits;

public:
    // Constructor
    Course(int cID, string cName, int cCredits) {
        courseID = cID;
        courseName = cName;
        credits = cCredits;
    }

    // Display course details
    void displayCourse() {
        cout << "Course ID: " << courseID << "\nCourse Name: " << courseName << "\nCredits: " << credits << "\n";
    }
};

// Main function
int main() {
    // Creating student object
    Student student1(101, "Singh", 20);
    
    // Creating course object
    Course course1(401, "CSE", 4);

    // Displaying details
    cout << "Student Details:-\n";
    student1.displayStudent();

    cout << "Course Details:-\n";
    course1.displayCourse();

    return 0;
}