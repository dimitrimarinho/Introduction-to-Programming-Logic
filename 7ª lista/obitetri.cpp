/* Link do Problema : http://br.spoj.com/problems/OBITETRI/ */

#include<iostream>
#include<string>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
	int J, j, test = 0, maior_pont, aux_pont, menor_alfab;
	
	while (cin >> J, J != 0){

		string player[J], aux_player;
		int pont, soma[J], position[J];
	
		for (int clear = 0; clear < J; clear++){
			soma[clear] = 0;
			position[clear] = 0;
		}
		int max, min;
		for (int i = 0; i < J; i++){
			cin >> player[i];
			for (int j = 0 ; j < 12; j++){
				cin >> pont;
				if (j == 0){
					max = pont;
					min = pont;
				}
				else if (j > 0){
					if (pont > max){
						max = pont;
					}
					else if (pont < min){
						min = pont;
					}
				}
				soma[i] += pont;
			}
			soma[i] -= (max+min);
			
		}

		for (int i = 0; i < J-1; i++){
			maior_pont = i;
			for (j = i + 1; j < J; j++){
				//alterações aqui
				if (soma[j] > soma[maior_pont] || (soma[j]==soma[maior_pont] && player[j] < player[maior_pont])){
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

		//modificações aqui
		position[0]=1;
		for (int i = 1; i < J; i++){
			if (soma[i] == soma[i-1])
				position[i]=position[i-1];
			else
				position[i]=i+1;
		}
		
		cout << "Teste " << ++test << endl;

		for (int i = 0; i < J; i++){
			cout << position[i] << " " << soma[i] << " " <<  player[i] << endl;
		}
		cout << endl;  

	}

}
