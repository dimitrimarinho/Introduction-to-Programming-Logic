// Link of the problem (language PT-BR): http://br.spoj.com/problems/JTIRA12/
// (Name of the problem) JTIRA12 - Tira-teima

#include<iostream>
using namespace std;
int main(void){

  int X, Y;
  cin >> X >> Y;
  if ((X < 0) || (X > 432) || (Y < 0) || (Y > 468))
    cout << "fora\n";
  else
    cout << "dentro\n";

}
