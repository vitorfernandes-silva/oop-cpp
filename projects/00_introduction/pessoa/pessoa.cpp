#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Definindo a classe Pessoa
class Pessoa {

    // Atributos
    private:
        int id;
        string nome;
        int idade;

    // Métoddos
    public:
        Pessoa(int _id, string _nome, int _idade); // Construtor
        ~Pessoa();
        void setId(int _id);
        int getId();

        void setNome(string _nome);
        string getNome();

        void setIdade(int _idade);
        int getIdade(); 
    
};

// Implementação do Construtor
Pessoa::Pessoa(int _id, string _nome, int _idade){
    id = _id;
    nome = _nome;
    idade = _idade;
}

Pessoa::~Pessoa(){
    cout << "Classe Destruida";
}

// Implementação dos métodos 
void Pessoa::setId(int _id){
    id = _id;
}

int Pessoa::getId(){
    return id;
}

void Pessoa::setNome(string _nome){
    nome = _nome;
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setIdade(int _idade){
    idade = _idade;
}

int Pessoa::getIdade(){
    return idade;
}

int main(){

    Pessoa amigo = Pessoa(1, "Joao", 30);

    cout << "ID - " << amigo.getId() << endl;
    cout << "NOME - " << amigo.getNome() << endl;
    cout << "IDADE - " << amigo.getIdade() << endl;
    amigo.~Pessoa();
    
    return 0;
}