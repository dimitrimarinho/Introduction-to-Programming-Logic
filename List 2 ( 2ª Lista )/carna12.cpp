// Link of the problem (language PT-BR): http://br.spoj.com/problems/CARNA12/
// (Name of the problem) CARNA12 - Carnaval

#include<iostream>
#include<iomanip>
using namespace std;
int main(void){

  float Notas[5] = {}, menor, maior, Nfinal = 0;
  for (int i = 0; i < 5; i++){
    cin >> Notas[i];
    if (i ==0){
      menor = Notas[0];
      maior = Notas[0];
    }
    if (Notas[i] < menor)
      menor = Notas[i];
    else if (Notas[i] > maior)
      maior = Notas[i];
  }
  for(int i = 0; i < 5; i++){
    Nfinal+= Notas[i];
  }
  Nfinal-= (menor+maior);
  cout << fixed << setprecision(1) << Nfinal << endl;

}
