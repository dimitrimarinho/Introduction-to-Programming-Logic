// Link of the problem (language PT-BR): http://br.spoj.com/problems/VICE12/
// (Name of the problem) VICE12 - Vice-campeão

#include<iostream>
using namespace std;
int main(void){

  int A, B, C;
  cin >> A >> B >> C;
  if ((A > B) && (A > C)){
    if (B > C)
        cout << B;
    else
        cout << C;
  }
  else if ((B > A) && (B > C)){
    if (A > C)
      cout << A;
    else
      cout << C;
  }
  else if ((C > A) && (C > B)){
    if (A > B)
      cout << A;
    else
      cout << B;
  }

}
