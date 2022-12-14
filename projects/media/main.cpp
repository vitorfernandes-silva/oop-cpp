// Mean calculation of 3 grades in C++
// Preprocessing directive
// Indicates to include the iostream.h file
#include <iostream>

// Namespace declaration
using namespace std;

// Main Program
int main(){
    float media, nota, soma;
    int i;
    soma = 0;

    for (i = 0; i < 3; i++)
    {
        cout << "Nota da prova" << i << endl;
        cin >> nota;
        soma = soma + nota;
    }
    
    // mean calculation
    media = soma / 3;

    // Displaying the result on the screen
    cout << "Media = " << media << endl;

    return 0;
}