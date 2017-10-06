// Link of the problem (language PT-BR): http://br.spoj.com/problems/JBOLO12/
// (Name of the problem) JBOLO12 - Receita de Bolo

#include<iostream>
using namespace std;
int main(void){

  int A, B, C, ingred1, ingred2, ingred3;
  cin >> A >> B >> C;
  ingred1 = A/2;
  ingred2 = B/3;
  ingred3 = C/5;
  if ((ingred1 <= ingred2) && (ingred1 <= ingred3))
    cout << ingred1 << endl;
  else if ((ingred2 <= ingred1) && (ingred2 <= ingred3))
    cout << ingred2 << endl;
  else
    cout << ingred3 << endl;

}
