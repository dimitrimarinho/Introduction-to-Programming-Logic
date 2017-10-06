// Link of the problem (language PT-BR): http://br.spoj.com/problems/JCAMPE14/
// (Name of the problem) JCAMPE14 - Campeonato

#include<iostream>
using namespace std;
int main(void){

  int Cv,Ce,Cs,Fv,Fe,Fs;
  cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
  if ( ((Cv*3)+Ce) > ((Fv*3)+Fe) )
    cout << "C\n";
  else if ( ((Fv*3)+Fe) > ((Cv*3)+Ce) )
    cout << "F\n";
  else{
    if (Cs > Fs)
      cout << "C\n";
    else if (Fs > Cs)
      cout << "F\n";
    else
      cout << "=\n";
  }

}
