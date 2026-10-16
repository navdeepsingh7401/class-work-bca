#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Define a class named Student
class Student
{
    // Data members (attributes) of the class
    int rollNo; 
    string name;
    float marks;

public:
    // Member function to input student details
    void getDetails()
    {
        cout << "  Roll number: ";
        cin >> rollNo;

        cout << "  Name: ";
        getline(cin >> ws, name);

        cout << "  Marks: ";
        cin >> marks;
    }

    // Member function to display student details
    void displayDetails(int studentNumber)
    {
        cout << left << setw(12) << studentNumber
             << setw(16) << rollNo
             << setw(24) << name
             << fixed << setprecision(2) << marks << '\n';
    }
};

// Main function: execution starts here
int main()
{   
    cout << "====================================\n"
         << "       STUDENT DETAILS ENTRY\n"
         << "====================================\n"
         << "Name   : Navdeep Singh\n"
         << "Roll No: 2510997401\n";

    // Create three objects of the Student class
    Student s1, s2, s3;

    // Input details for each student
    cout << "\nEnter details for Student 1:\n";
    s1.getDetails();

    cout << "\nEnter details for Student 2:\n";
    s2.getDetails();

    cout << "\nEnter details for Student 3:\n";
    s3.getDetails();

    // Display details of all students
    cout << "\n====================================\n"
         << "          STUDENT SUMMARY\n"
         << "====================================\n";
    cout << left << setw(12) << "Student"
         << setw(16) << "Roll Number"
         << setw(24) << "Name"
         << "Marks\n";
    cout << string(58, '-') << '\n';
    s1.displayDetails(1);
    s2.displayDetails(2);
    s3.displayDetails(3);

    return 0;  // End the program successfully
}

// ### Explanation of the Program
//
// **1. Header Files**
//
// - `<iostream>` provides `cin` and `cout` for input and output.
// - `<iomanip>` provides formatting tools such as `setw`, `fixed`, and
//   `setprecision`.
// - `<string>` provides the `string` type and the `string` constructor used
//   to create the line of dashes in the summary.
//
// **2. Namespace**
//
// - `using namespace std;` lets the program use standard library names such
//   as `cout`, `cin`, and `string` without prefixing them with `std::`.
//
// **3. The `Student` Class**
//
// - The `Student` class groups the data and functions for one student's
//   details.
// - `rollNo` stores the student's roll number as an integer.
// - `name` stores the student's name as text.
// - `marks` stores the student's marks as a floating-point number.
// - These data members are private by default because they appear before
//   the `public:` label.
//
// **4. The `getDetails()` Member Function**
//
// - This function prompts the user for a roll number, name, and marks.
// - `cin >> rollNo` and `cin >> marks` read the numeric values.
// - `getline(cin >> ws, name)` reads the full name, including spaces.
// - `ws` consumes leftover whitespace (such as the newline after the roll
//   number) before `getline` reads the name.
//
// **5. The `displayDetails()` Member Function**
//
// - This function prints a student's information as one row in the summary.
// - Its `studentNumber` parameter identifies the student's position in the
//   list; it is separate from the student's roll number.
// - `left` aligns the values to the left, and each `setw` sets the minimum
//   width of the next printed field.
// - `fixed` and `setprecision(2)` display marks with two digits after the
//   decimal point.
// - `'\n'` ends the row.
//
// **6. The `main()` Function**
//
// - `main()` is where the program starts running.
// - The first group of `cout` statements prints the entry heading and the
//   displayed student identification information.
// - `Student s1, s2, s3;` creates three separate Student objects.
// - The program asks for each student's details and calls that object's
//   `getDetails()` function to read them.
// - It then prints the summary heading and column labels.
// - `string(58, '-')` creates a line of 58 dashes to separate the headings
//   from the student rows.
// - The three calls to `displayDetails()` print each student's information.
//
// **7. Return Statement**
//
// - `return 0;` indicates that the program finished successfully.
//
// ### Conclusion
// This program uses a class to store and process the details of three
// students. It accepts their roll numbers, full names, and marks, then
// displays the information in a formatted summary table.