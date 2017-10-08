// Link of the problem (language PT-BR): http://br.spoj.com/problems/JSEDEX/
// (Name of the problem) JSEDEX - Sedex

#include<iostream>
using namespace std;
int main(void){

  int N, A, L, P;
  cin >> N >> A >> L >> P;
  if ((A >= N) && (L >= N) && (P >= N))
    cout << "S\n";
  else
    cout << "N\n";

}
