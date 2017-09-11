// Link of the problem (language PT-BR): http://br.spoj.com/problems/ACOES1MG/
// (Name of the problem) ACOES1MG - Investindo no mercado de açőes 1

#include<iostream>
using namespace std;
int portfolio (int N, int K);
int main(){

	int N, K;
	while (cin >> N >> K, N != 0 && K !=0){

		cout << portfolio(N, K) << endl;

	}


}

int portfolio (int N, int K){

	if (N > K){
		if (N%2 == 0){
			return 2*portfolio(N/2, K);
		}
		else{
			return portfolio(N/2, K) + portfolio(N/2 + 1, K);
		}
	}
	if (N <= K){
		return 1;
	}

}
