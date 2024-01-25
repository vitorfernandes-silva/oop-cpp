#include <iostream>
#include "conta.h"
#include "poupanca.h"
#include "contacorrente.h"

using namespace std;

int main(){
  Poupanca conta1(500.50, 2.5);
  ContaCorrente conta2(800, 1.8);

 // Testando os métodos
 cout << "###### ANTES DAS MODIFICACOES ######\n\n";

 cout << "---- Conta 1 ----" << endl;
 conta1.print();

 cout << "---- Conta 2 ----" << endl;
 conta2.print(); 

 cout << "\n\n###### DEPOIS DAS MODIFICACOES ######\n\n";

 cout << "---- Conta 1 ----" << endl;
 conta1.creditar(250);
 conta1.debitar(1000);
 conta1.print();

 cout << "---- Conta 2 ----" << endl;
 conta2.creditar(250);
 conta2.debitar(1000);
 conta2.print();




  return 0;
}