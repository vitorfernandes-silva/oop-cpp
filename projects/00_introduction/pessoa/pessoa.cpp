#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Pessoa {
    public:
        int id;
        string nome;
        int idade;
};

int main(){

    Pessoa amigo;

    amigo.id = 1;
    amigo.nome = "Pedro";
    amigo.idade = 20;

    cout << "ID " << amigo.id << endl;
    cout << "NOME " << amigo.nome << endl;
    cout << "IDADE " << amigo.idade << endl;

    getch();
    return 0;
}