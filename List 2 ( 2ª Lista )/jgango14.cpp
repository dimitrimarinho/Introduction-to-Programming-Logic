// Link of the problem (language PT-BR): http://br.spoj.com/problems/VICE12/
// (Name of the problem) VICE12 - Vice-campeão

#include<iostream>
using namespace std;
int main(void){

  int P1,C1,P2,C2;
  cin >> P1 >> C1 >> P2 >> C2;
  if (P1*C1 == P2*C2)
    cout << "0\n";
  else if (P1*C1 > P2*C2)
    cout << "-1\n";
  else
    cout << "1\n";

}
