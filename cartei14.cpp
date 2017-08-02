// E-MAIL : bfs.07@hotmail.com  Whatsapp BERNARDO (71)9 9112 7117


#include<iostream>
using namespace std;
int main(void){

	int N, M, tempo = 0, pos_atual = 0 , pos_futura = 0;
	cin >> N >> M;
	int casas[N], entregas[M];
	for (int i = 0; i < N; i++){
		cin >> casas[i];
	}
	
	for (int i = 0; i < M; i++){
		cin >> entregas[i];
		int ini = 0, fim = N-1, m = (ini+fim)/2;
		while ((entregas[i] < casas[fim]) && (entregas[i] > casas[ini])){
			int cont = 1;
			if (entregas[i] == casas[m]){
				if (cont == 1){				
					pos_atual = m;
					tempo += m;
					cout << endl << tempo;
					break;
				}
				else if (cont == 2){
					pos_futura = m;
				}
				else if (cont > 2){
					pos_atual = pos_futura;
					pos_futura = m;
				}
				if ((pos_atual > pos_futura) && (cont > 1)){
					tempo += (pos_atual-pos_futura);
					cout << endl << tempo;
					break;
				}
				else if (( pos_futura > pos_atual) && (cont > 1)){
					tempo += (pos_futura-pos_atual);
					cout << endl << tempo;
					break;
				}
			}
			else if (entregas[i] < casas[m]){
				fim = m;
				m = (ini+fim)/2;
				cont++;
			}
			else if(entregas[i] > casas[m]){
				ini = m;
				m = (ini+fim/2);
				cont++;
			}
		}	
	}
	cout << endl << tempo << endl;
}
