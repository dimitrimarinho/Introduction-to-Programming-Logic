// Link of the problem (language PT-BR): http://br.spoj.com/problems/JFLIPE14/
// (Name of the problem) JFLIPE14 - Flíper

#include<iostream>
using namespace std;
int main(void){

  int P, R;
  cin >> P >> R;
  if (P == 0)
    cout << "C\n";
  else if ((P == 1) && (R == 0))
    cout << "B\n";
  else
    cout << "A\n";

}
