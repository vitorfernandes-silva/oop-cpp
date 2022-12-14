// Figure 3.1
// Defines a Class GradeBook with displayMessage member function;
// Creates a GradeBook object and call its displayMessage function;
#include <iostream>

using std::cout;
using std::endl;

// Definition of GradeBook Class
class GradeBook
{
    public:
        // function that displays a welcome message to the GradeBook user
        void displayMessage()
        {
            cout << "Welcome to the Grade Book!" << endl;
        }// End of displayMessage function
};// End of GradeBook class

// The main function starts the execution of program
int main()
{
    GradeBook myGradebook; // Makes a GradeBook object called myGradebook
    myGradebook.displayMessage(); // Call the displayMessage function of object

    return 0; // Indicates successful termination
}// end of main