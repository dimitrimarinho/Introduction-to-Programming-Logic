// Link of the problem (language PT-BR): http://br.spoj.com/problems/SUPERMER/
// (Name of the problem) SUPERMER - Supermercado

#include<iostream>
using namespace std;
int main(){

	int S, X, Y, test = 0, j, aux, menor;
	int market[1000][2] = {};
	while (cin >> S, S!=0){

		for (int i = 0; i < S; i++){
			cin >> X >> Y;
			market[i][0] = X;
			market[i][1] = Y;
		}

		for (int i=0; i < S-1; i++){
           	menor = i;
           	for (j = i + 1; j < S; j++){
               	if (market[j][0] < market[menor][0]){
                    	menor = j;
               	}
			}
			aux = market[i][0];
			market[i][0] = market[menor][0];
			market[menor][0] = aux;
      	 }
		for (int i = 0; i < S-1; i++){
           	menor = i;
           	for (j = i + 1; j < S; j++){
               	if (market[j][1] < market[menor][1]){
                    	menor = j;
               	}
			}
			aux = market[i][1];
			market[i][1] = market[menor][1];
			market[menor][1] = aux;
      	}
		/*for (int i = 0 ; i < S; i++){
			cout << market[i][1] << endl;
		}*/
		cout << "Teste " << ++test << endl;
		cout << market[S/2][0] << " " << market[S/2][1] << endl;
	}
}
