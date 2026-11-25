#include <iostream>  // Provides cin and cout for input and output.
using namespace std; // Lets us use cout and cin without writing std::.

// Checks a student's marks and displays the result category.
void checkResult(int marks) {

    // DECISION 1: Marks must be between 0 and 100, inclusive.
    // If either condition is true, the entered marks are invalid.
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Enter a value from 0 to 100." << endl;
        return; // Stop this function because the input is invalid.
    }

    // DECISION 2: Check whether the student scored 75 or more.
    if (marks >= 75) {
        cout << "Result: Distinction" << endl;
    }

    // If the previous condition was false, check for 60 or more.
    // This is DECISION 3.
    else if (marks >= 60) {
        cout << "Result: First Class" << endl;
    }

    // If the previous grade conditions were false, check for 40 or more.
    // This is DECISION 4.
    else if (marks >= 40) {
        cout << "Result: Pass" << endl;
    }

    // If all three grade conditions were false, marks are below 40.
    else {
        cout << "Result: Fail" << endl;
    }
}

// Program execution begins from main().
int main() {
    int marks; // Stores the marks entered by the user.

    cout << "STUDENT RESULT CLASSIFICATION" << endl;
    cout << "Enter marks (0 to 100): ";
    cin >> marks; // Read marks from the keyboard.

    checkResult(marks); // Call the function that checks and displays the result.

    return 0; // End the program successfully.
}
