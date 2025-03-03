/*
write a program to store 10 roll no of Weak Learner of your class and 10 roll no of Advance learner of your class,
accourding to you.
store rollno's in two different array and display the record.
*/
#include <iostream>
using namespace std;

class Learner {
private:
    int rollNumbers[10];

public:
    void inputRollNumbers() {
        for (int i = 0; i < 10; i++) {
            cout << "Enter roll number for learner " << i + 1 << ": ";
            cin >> rollNumbers[i];
        }
    }

    void displayRollNumbers() {
        for (int i = 0; i < 10; i++) {
            cout << rollNumbers[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Learner weakLearners, advancedLearners;

    cout << "Enter 10 roll numbers for weak learners:" << endl;
    weakLearners.inputRollNumbers();

    cout << "\nEnter 10 roll numbers for advanced learners:" << endl;
    advancedLearners.inputRollNumbers();

    cout << "\nRoll numbers of weak learners: ";
    weakLearners.displayRollNumbers();

    cout << "\nRoll numbers of advanced learners: ";
    advancedLearners.displayRollNumbers();

    return 0;
}
