// Link of the problem (language PT-BR): http://br.spoj.com/problems/GUERRA12/
// (Name of the problem) GUERRA12 - Guerra por Território

#include<stdio.h>
int main(void){

	long long N, s = 0, s1 = 0, r;
	scanf("%lli", &N);
	long long n[N];

	for (int i = 0; i < N; i++){
		scanf("%lli", &n[i]);
		s += n[i];
	}
	for (int i = 0; i < N; i++){
		s -= n[i];
		s1 += n[i];
		if (s == s1){
			r = i + 1;
			break;
		}
	}
	printf("%lli\n", r);

}
