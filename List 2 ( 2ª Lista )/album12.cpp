// Link of the problem (language PT-BR): http://br.spoj.com/problems/ALBUM12/
// (Name of the problem) ALBUM12 - Álbum de Fotos

#include<iostream>
#include<algorithm>         // function max
using namespace std;
int main(void){

  int X, Y, L1, H1, L2, H2;
  cin >> Y >> X >> L1 >> H1 >> L2 >> H2;

  if (((L1+L2) <= X) && (max(H1,H2) <= Y))
    cout << "S\n";
  else if (((L1+H2) <= X) && (max(L2,H1) <= Y))
    cout << "S\n";
  else if (((H1+L2) <= X) && (max(L1,H2) <= Y))
    cout << "S\n";
  else if (((H1+H2) <= X) && (max(L1,L2) <= Y))
    cout << "S\n";

  else if (((L1+L2) <= Y) && (max(H1,H2) <= X))
    cout << "S\n";
  else if (((L1+H2) <= Y) && (max(L2,H1) <= X))
    cout << "S\n";
  else if (((H1+L2) <= Y) && (max(L1,H2) <= X))
    cout << "S\n";
  else if (((H1+H2) <= Y) && (max(L1,L2) <= X))
    cout << "S\n";

  else
    cout << "N\n";

}
