#include "../include/pessoa.h"
#include "../include/aluno.h"
#include "../include/professor.h"
#include <iostream>

using namespace std;

int main(){
    Pessoa p1("Joao", "Itajuba-MG");
    cout << "---- Pessoa apenas ----" << endl;
    p1.imprime();
    cout << endl;

    Aluno a1 {"Vitor", "Sao Carlos-SP", "BCC", 800217};
    cout << "---- Aluno ----" << endl;
    a1.imprime();
    cout << endl;

    Professor pr1 {"Jose", "Sao Paulo-SP", 678910, 3, "IME"};
    cout << "---- Professor ----" << endl;
    pr1.imprime();
    cout << endl;

    return 0;
}