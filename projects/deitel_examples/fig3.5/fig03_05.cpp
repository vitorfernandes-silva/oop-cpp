// Figure 3.5: fig03_05.cpp
// Defines a GradeBook class that contains a courseName data member
// and member functions to set and get its value
// Create and manipulate a GradeBook object with these functions.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // the program uses standard C++ string class
using std::string;
using std::getline;

// definition of the GradeBook class
class GradeBook
{
    public:

    // function that sets the name of the course
    void setCourseName(string name)
    {
        courseName = name; // stores the course name in the object
    }

    // function that gets the name of the course
    string getCourseName()
    {
        return courseName; // returns the courseName of the object
    }

    // function that displays a welcome message
    void displayMessage()
    {
        // this statement calls getCourseName to get the
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    }

    private:
    string courseName; //course name for this GradeBook
};

int main()
{
    string nameOfCourse; //character strings to store the course name
    GradeBook myGradeBook; // // creates a GradeBook object called myGradeBook

    // displays initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // requests, inserts and configures the name of the course
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); // reads the name of a course with blanks
    myGradeBook.setCourseName(nameOfCourse); // set course name

    cout << endl; // output a blank line
    myGradeBook.displayMessage(); // displays the message with the new course name
    
    return 0;
}