// Link of the problem (language PT-BR): http://br.spoj.com/problems/CARTAS14/
// (Name of the problem) CARTAS14 - Cartas

#include<iostream>
using namespace std;
int main(void){

  int card1, card2, card3, card4, card5;
  cin >> card1 >> card2 >> card3 >> card4 >> card5;
  if ((card1 < card2) && (card2 < card3) && (card3 < card4) && (card4 < card5))
    cout << "C\n";
  else if ((card1 > card2) && (card2 > card3) && (card3 > card4) && (card4 > card5))
    cout << "D\n";
  else
    cout << "N\n";

}
