// Link of the problem (language PT-BR): http://br.spoj.com/problems/NOTA09/
// (Name of the problem) NOTA09 - Notas da prova

#include<iostream>
using namespace std;
int main(void){

  int N;
  cin >> N;
  if (N == 0)
    cout << "E\n";
  else if ((N >= 1) && (N <= 35))
    cout << "D\n";
  else if ((N >= 36) && (N <= 60))
    cout << "C\n";
  else if ((N >= 61) && (N <= 85))
    cout << "B\n";
  else
    cout << "A\n";

}
