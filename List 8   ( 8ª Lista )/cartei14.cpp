// Link of the problem (language PT-BR): http://br.spoj.com/problems/CARTEI14/
// (Name of the problem) CARTEI14 - Carteiro

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N, M;
	cin >> N >> M;

	int casas[N];
	for (int i = 0; i < N; i++){
		cin >> casas[i];
	}

	int posi=0, tempo=0;

	for (int i=0; i<M; i++){
		int entrega;
		cin >> entrega;

		int ini = 0, fim = N-1, m;

		while (ini<=fim){
			m = (ini+fim)/2;
			if(entrega > casas[m])
				ini = m+1;
			else if(entrega < casas[m])
				fim = m-1;
			else
				break;
		}
		// (Debug) cout << m << endl;
		if(m>posi)
			tempo += m-posi;
		else
			tempo -= m-posi;
		posi = m;
		// (Debug) cout << posi << endl;
		// (Debug) cout << endl << tempo;
	}

	cout << tempo << endl;
}
