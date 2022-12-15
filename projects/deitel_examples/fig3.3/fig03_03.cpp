// Figure 3.3: fig03_03.cpp
// Defines a GradeBook class with a member function that accepts a parameter
// Creates a GradeBook object and calls its displayMessage member function
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // the program uses default string class
using std::string;
using std::getline;

// definition of GradeBook class
class GradeBook
{
    public:
        // function that displays a welcome message to the GradeBook user
        void displayMessage(string courseName)
        {
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        } // end of displayMessage function
}; // end of GradeBook class

// the main function starts program execution
int main()
{
    string nameOfCourse; // strings of characters to store the course name
    GradeBook myGradeBook; // creates an object GradeBook called myGradeBook

    // prompt for input name of course
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // read the name of course with blank spaces
    cout << endl; // generates blank line output
    
    // call the displayMessage function of myGradeBook
    // and pass nameOfCourse with an argument
    myGradeBook.displayMessage(nameOfCourse);
    return 0; //indicates successful termination
} // end of main