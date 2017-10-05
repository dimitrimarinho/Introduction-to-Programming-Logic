// Link of the problem (language PT-BR): http://br.spoj.com/problems/PEDAGIO1/
// (Name of the problem) PEDAGIO1 - Pedágio

#include<iostream>
using namespace std;
int main(void){

  int L, D, K, P;
  cin >> L >> D >> K >> P;
  if (L >= D)
    cout << (L*K) + (L/D)*P << endl;
  else
    cout << (L*K) << endl;

}
