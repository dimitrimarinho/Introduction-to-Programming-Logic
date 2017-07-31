/* Link do Problema : http://br.spoj.com/problems/OBITETRI/ */

#include<iostream>
#include<string>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
	int J, j, test = 0, maior_pont, aux_pont, menor_alfab;
	
	while (cin >> J, J != 0){

		string player[J], aux_player;
		int pont, soma[J], tabela[J][12], position[J];
	
		for (int clear = 0; clear < J; clear++){
			soma[clear] = 0;
			position[clear] = 0;
		}

		for (int i = 0; i < J; i++){
			cin >> player[i];
			for (int j = 0 ; j < 12; j++){
				cin >> tabela[i][j];
			}
			
		}

		for (int m = 0; m < J; m++){
			for (int i = 0; i < 11; i++){
				maior_pont = i;
				for (j = i + 1; j < 12; j++){
					if (tabela[m][j] > tabela[m][maior_pont]){
						maior_pont = j;
					}
				}
				aux_pont = tabela[m][i];
				tabela[m][i] = tabela[m][maior_pont];
				tabela[m][maior_pont] = aux_pont;
			}
		}
		
		for (int i = 0; i < J; i++){
			for (int k = 1; k < 11; k++){
				soma[i] += tabela[i][k];
			}		
		}

		for (int i = 0; i < J-1; i++){
			maior_pont = i;
			for (j = i + 1; j < J; j++){
				if (soma[j] > soma[maior_pont]){
					maior_pont = j;
				}
			}
			aux_pont = soma[i];
			aux_player = player[i];
			soma[i] = soma[maior_pont];
			player[i] = player[maior_pont];
			soma[maior_pont] = aux_pont;
			player[maior_pont] = aux_player;
		}

		
		
		for (int i = 0; i < J; i++){
			if (soma[i] == soma[i+1]){
				position[i] = i+1;
				position[i+1] = position[i];									
			}
			else{
				if (soma[i] != soma[i-1]){
					position[i] = i+1;
				}	
			}
		}

		for (int i = 0; i < J-1; i++){
			menor_alfab = i;
			for (j = i + 1; j < J; j++){
				if ( (soma[j] == soma[maior_pont]) && (player[j] < player[maior_pont]) ){
					maior_pont = j;
				}
			}
			aux_player = player[i];
			player[i] = player[maior_pont];
			player[maior_pont] = aux_player;
		}
		
		cout << "Teste " << ++test << endl;

		for (int i = 0; i < J; i++){
			cout << position[i] << " " << soma[i] << " " <<  player[i] << endl;
		}
		cout << endl;  

	}

}
