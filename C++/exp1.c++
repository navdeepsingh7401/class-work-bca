// 1. Header file
// iostream is used for input and output operations.
#include <iostream>

// 2. Namespace
// std is the standard namespace in C++.
// It allows us to use cout without writing std::cout.
using namespace std;

// 3. Main function
// Program execution starts from the main() function.
int main()
{
    // 4. Output statement
    // cout is used to display a message on the screen.
    cout << "Hello, World!" << endl;

    // Display another message
    cout << "Welcome to C++ Programming!" << endl;

    // 5. Return statement
    // return 0 indicates that the program executed successfully.
    return 0;
}










// ### Explanation of the Program
//
// **1. Header File (`#include <iostream>`)**
//
// - Header files provide predefined functions and objects.
// - The `iostream` header is used for input and output operations.
// - It allows us to use `cout` to display output.
//
// **2. Namespace (`using namespace std;`)**
//
// - A namespace organizes names and helps avoid naming conflicts.
// - `std` is the standard namespace in C++.
// - Using `using namespace std;` allows us to write `cout` instead of `std::cout`.
//
// **3. Main Function (`int main()`)**
//
// - The `main()` function is the starting point of a C++ program.
// - The program begins executing statements inside its curly braces `{ }`.
// - The `int` indicates that the function returns an integer value.
//
// **4. Output Statement (`cout`)**
//
// - `cout` is used to display text on the screen.
// - The insertion operator `<<` sends the text to the output stream.
// - `endl` moves the cursor to the next line.
//
// **5. Comments**
// Comments explain the code and make it easier to understand. The compiler ignores comments.
//
// There are two main types of comments in C++:
//
// - **Single-line comment:** Starts with `//`.
//
// ```
// // This is a single-line comment.
// ```
//
// - **Multi-line comment:** Starts with `/*` and ends with `*/`.
//
// ```
// /*
//    This is a
//    multi-line comment.
// */
// ```
//
// **6. Return Statement (`return 0;`)**
//
// - It indicates that the program has finished successfully.
// - It returns the value `0` to the operating system.
//
// ### Conclusion
// The basic structure of a C++ program consists of **header files, namespace declaration, the `main()` function, executable statements, comments, and a return statement**. These elements help organize the program and make it easier to read and understand.