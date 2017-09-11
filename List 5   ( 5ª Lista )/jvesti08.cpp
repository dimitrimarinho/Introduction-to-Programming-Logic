// Link of the problem (language PT-BR): http://br.spoj.com/problems/JVESTI08/
// (Name of the problem) JVESTI08 - Vestibular

#include<iostream>
#include<string>
using namespace std;
int main(void){

	int N, a = 0;
	string ni, gab;
	cin >> N >> ni >> gab;
	for (int i = 0; i < N; i++){
		if (ni[i] == gab[i]){
			a++;
		}
	}
	cout << a << endl;
	return 0;

// Submeter no C++ 4.3.2  (usar o cabeçalho do C++ ou pegar o código em C++
}
