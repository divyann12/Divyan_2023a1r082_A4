#include <iostream>
#include <string>
using namespace std;
// Forward declaration
class Course;

// Student class definition
class Student {
private:
    // Private access specifier for data members
    string rollNo;      // Private: Roll number is a unique identifier and shouldn't be changed after creation
    string name;        // Private: Name should be protected from direct modification to maintain data integrity
    int age;                 // Private: Age needs validation before setting, so restrict direct access
    string address;     // Private: Address should be modified via methods for data validation
    
    // Instead of vector, use fixed array with maximum size
    static const int MAX_COURSES = 10;
    Course* enrolledCourses[MAX_COURSES]; // Private: Course enrollment should be controlled via proper methods
    int enrolledCoursesCount;             // Private: To keep track of the number of enrolled courses

public:
    // Public access specifier for member functions
    // Parameterized constructor to add student details
    Student(string name, std::string rollNo, int age, std::string address) {
        // Validation could be added here
        if (age < 0 || age > 120) {
            cout << "Invalid age. Setting to default value of 18." << std::endl;
            this->age = 18;
        } else {
            this->age = age;
        }
        
        this->name = name;
        this->rollNo = rollNo;
        this->address = address;
        this->enrolledCoursesCount = 0;
        
        // Initialize course array
        for (int i = 0; i < MAX_COURSES; i++) {
            enrolledCourses[i] = nullptr;
        }
        
        // Display confirmation message
        cout << "Student " << name << " with Roll No. " << rollNo << " added successfully!" << std::endl;
    }
    
    // Destructor
    ~Student() {
        cout << "Student with Roll No. " << rollNo << " is being deleted." << std::endl;
    }
    
    // Method to enroll in a course
    bool enrollInCourse(Course* course) {
        if (enrolledCoursesCount < MAX_COURSES) {
            enrolledCourses[enrolledCoursesCount++] = course;
            return true;
        }
        return false;
    }
    
    // Getter methods - Public to allow read access to private data
    string getName() const {
        return name;
    }
    
    string getRollNo() const {
        return rollNo;
    }
    
    int getAge() const {
        return age;
    }
    
    string getAddress() const {
        return address;
    }
    
    // Setter methods - Public to provide controlled write access to private data
    void setName(const string& newName) {
        name = newName;
    }
    
    // Roll number is immutable after creation (no setter provided)
    
    void setAge(int newAge) {
        if (newAge > 0 && newAge < 120) {
            age = newAge;
        } else {
            cout << "Invalid age value. Age not updated." << std::endl;
        }
    }
    
    void setAddress(const string& newAddress) {
        address = newAddress;
    }
    
    // Display student information
    void displayDetails() const {
        cout << "\n----- Student Details -----" << std::endl;
        cout << "Name: " << name << std::endl;
        cout << "Roll No: " << rollNo << std::endl;
        cout << "Age: " << age << std::endl;
        cout << "Address: " << address << std::endl;
        cout << "Number of courses enrolled: " << enrolledCoursesCount << std::endl;
    }
};

// Course class definition
class Course {
private:
    // Private access specifier for data members
    string courseId;    // Private: Course ID is a unique identifier and shouldn't be changed after creation
    int credits;             // Private: Credits need validation before assignment
    
    // Instead of vector, use fixed array with maximum size
    static const int MAX_STUDENTS = 50;
    Student* enrolledStudents[MAX_STUDENTS]; // Private: Student enrollment should be controlled
    int enrolledStudentsCount;              // Private: To keep track of the number of enrolled students
    
protected:
    // Protected access specifier - accessible to derived classes
    string title;       // Protected: Allows derived classes to access/modify title for specialized operations
    string description; // Protected: Allows derived classes to access/modify description
    
public:
    // Public access specifier for member functions
    // Parameterized constructor
    Course(string courseId, string title, string description, int credits) {
        this->courseId = courseId;
        this->title = title;
        this->description = description;
        this->enrolledStudentsCount = 0;
        
        // Initialize students array
        for (int i = 0; i < MAX_STUDENTS; i++) {
            enrolledStudents[i] = nullptr;
        }
        
        // Validation for credits
        if (credits <= 0) {
            cout << "Invalid credits. Setting to default value of 3." << endl;
            this->credits = 3;
        } else {
            this->credits = credits;
        }
        
        cout << "Course " << title << " with ID " << courseId << " added successfully!" << endl;
    }
    
    // Destructor
    virtual ~Course() {
        cout << "Course with ID " << courseId << " is being deleted." << endl;
    }
    
    // Method to add a student to the course
    bool addStudent(Student* student) {
        if (enrolledStudentsCount < MAX_STUDENTS) {
            enrolledStudents[enrolledStudentsCount++] = student;
            return true;
        }
        return false;
    }
    
    // Getter methods
    string getCourseId() const {
        return courseId;
    }
    
    string getTitle() const {
        return title;
    }
    
    string getDescription() const {
        return description;
    }
    
    int getCredits() const {
        return credits;
    }
    
    // Setter methods (no setter for courseId as it's immutable)
    void setTitle(const string& newTitle) {
        title = newTitle;
    }
    
    void setDescription(const string& newDescription) {
        description = newDescription;
    }
    
    void setCredits(int newCredits) {
        if (newCredits > 0) {
            credits = newCredits;
        } else {
            cout << "Invalid credits value. Credits not updated." << endl;
        }
    }
    
    // Virtual function to display course details (can be overridden by derived classes)
    virtual void displayDetails() const {
        cout << "\n----- Course Details -----" << endl;
        cout << "Course ID: " << courseId << endl;
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Credits: " << credits << endl;
        cout << "Number of students enrolled: " << enrolledStudentsCount << endl;
    }
};

// Example of a derived class to demonstrate protected access
class UGCourse : public Course {
private:
    bool labRequired;    // Private to UGCourse
    
public:
    // Constructor that calls the base class constructor
    UGCourse(string courseId, string title, string description, int credits, bool labRequired)
        : Course(courseId, title, description, credits) {
        this->labRequired = labRequired;
    }
    
    // Override display method to show UG course specifics
    void displayDetails() const override {
        // Can directly access protected members from base class
        Course::displayDetails();
        cout << "Course Type: Undergraduate" << endl;
        cout << "Lab Required: " << (labRequired ? "Yes" : "No") << endl;
    }
};

// Example main function to demonstrate the parameterized constructor usage
int main() {
    // Using parameterized constructor to add student details
    Student s1("John Doe", "S12345", 20, "123 College St, City");
    Student s2("Jane Smith", "S67890", 22, "456 University Ave, Town");
    
    // Display added students
    s1.displayDetails();
    s2.displayDetails();
    
    // Create some courses
    Course c1("C101", "Introduction to Programming", "Basic programming concepts using C++", 4);
    UGCourse c2("C201", "Data Structures", "Advanced data structures and algorithms", 3, true);
    
    // Display courses
    c1.displayDetails();
    c2.displayDetails();
    
    // Enroll students in courses
    if (s1.enrollInCourse(&c1)) {
        c1.addStudent(&s1);
        cout << "Student " << s1.getName() << " enrolled in " << c1.getTitle() << endl;
    }
    
    if (s2.enrollInCourse(&c2)) {
        c2.addStudent(&s2);
        cout << "Student " << s2.getName() << " enrolled in " << c2.getTitle() << endl;
    }
    
    // Display updated details
    s1.displayDetails();
    c1.displayDetails();
    
    return 0;
}