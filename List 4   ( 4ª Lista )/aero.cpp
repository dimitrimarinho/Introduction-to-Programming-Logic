// Link of the problem (language PT-BR): http://br.spoj.com/problems/AERO/
// (Name of the problem) AERO - Aeroporto

#include<iostream>
using namespace std;
int main(){

	int A, V, X, Y;
	int j=0, k, biggest_airport = 0;
	cin >> A >> V;
	while (A!=0 && V!=0){

		int quantityX[101], biggests[101];
		for (int i=0; i < 101; i++){
			quantityX[i]=0;
			quantityX[i]=0;
		}

		//for (int i=0; i < 101; i++){
		//	biggests[i]=0;
		//}

		for (int i=0; i < V; i++){
			cin >> X >> Y;
			quantityX[X]+=1;
			quantityX[Y]+=1;
		}

			for (k=1; k <= A; k++){

				if (quantityX[k] >= biggest_airport){
					biggest_airport = quantityX[k];
				//	biggests[k]= k;
				}
				//else {
				//	biggests[k]=0;
				//}
			}

			cout << endl << "Teste " << j+1 << endl;

			for (int p=1; p <= A; p++){
			  if (quantityX[p]==biggest_airport){
						cout << p << " ";
				}
			}
			cout << endl;
			j++;
			biggest_airport = 0;
			cin >> A >> V;
	}

}
