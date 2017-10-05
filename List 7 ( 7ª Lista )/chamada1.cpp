// Link of the problem (language PT-BR): http://br.spoj.com/problems/CHAMADA1/
// (Name of the problem) CHAMADA1 - Chamada

#include<iostream>
#include<string>
using namespace std;
int main(void){

    int N, K;
    cin >> N >> K;
    string name[N], aux;
    int menor, j;
    for (int i = 0; i < N ; i++){
    	cin >> name[i];
	cin.ignore();
    }
    for (int i = 0; i < N-1; i++){
	menor = i;
	for (j = i+1; j < N; j++){
	    	if (name[j] < name[menor]){
			menor = j;
		}
	}
	aux = name[i];
	name[i] = name[menor];
	name[menor] = aux;
    }
    cout << name[K-1] << endl;
}
