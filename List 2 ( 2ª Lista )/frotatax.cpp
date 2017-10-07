// Link of the problem (language PT-BR): http://br.spoj.com/problems/FROTATAX/
// (Name of the problem) FROTATAX - Frota de Táxi

#include<iostream>
using namespace std;
int main(void){

  float A, G, Ra, Rg;
  cin >> A >> G >> Ra >> Rg;
  if ((Ra/A) > (Rg/G))
    cout << "A\n";
  else
    cout << "G\n";
}
