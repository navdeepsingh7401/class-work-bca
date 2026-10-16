#include <iostream>
#include <string>
using namespace std;



class Student
{
private:
    int rollNo;  // Private data member

public:
    string name;  // Public data member

    // Function to set the private roll number
    void setRollNo(int r)
    {
        rollNo = r;
    }

    // Function to display student details
    void display()
    {
        cout << "Roll Number: " << rollNo << endl; 
        cout << "Name: " << name << endl;
    }
};

int main()
{
    cout << "====================================\n"
         << "     ACCESS SPECIFIERS DEMO\n"
         << "====================================\n"

        // replace with your own name and roll number

         << "Name   : Navdeep Singh\n"          // Displaying the name of the student
         << "Roll No: 2510997401\n";            // Displaying the roll number of the student

    // Create an object of the Student class     
    Student s1;

    // Accessing public data member
    s1.name = "Mr. A";

    // Accessing private data through a public function
    s1.setRollNo(7401);

    cout << "\n--- Student Details ---\n";
    s1.display();

    // Direct access to a private member is not allowed
   // s1.rollNo = 101;  // Error: rollNo is private

    return 0;
}