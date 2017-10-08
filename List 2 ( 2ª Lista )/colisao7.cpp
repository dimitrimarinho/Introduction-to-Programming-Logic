// Link of the problem (language PT-BR): http://br.spoj.com/problems/COLISAO7/
// (Name of the problem) COLISAO7 - Detectando Colisões

#include<iostream>
using namespace std;
int main(void){

  int x0, y0, x1, y1, Ax0, By0, Ax1, By1;
  cin >> x0 >> y0 >> x1 >> y1 >> Ax0 >> By0 >> Ax1 >> By1;
  if ((Ax1 < x0) || (Ax0 > x1))
    cout << "0\n";
  else if ((By1 < y0) || (By0 > y1))
    cout << "0\n";
  else
    cout << "1\n";

}
