// Link of the problem (language PT-BR): http://br.spoj.com/problems/CONTA1/
// (Name of the problem) CONTA1 - Conta de água

#include<iostream>
using namespace std;
int main(void){

  int N;
  cin >> N;
  if (N <= 10){
      cout << "7\n";
  }
  else if ((N >= 11) && (N <= 30)){
      cout << (7 + (N-10)) << endl;
  }
  else if ((N >= 31) && (N <= 100)){
    cout << (27 + (N-30)*2) << endl;
  }
  else{
    cout << (167 + (N-100)*5) << endl;
  }
  
}
