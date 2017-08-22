#include<iostream>
using namespace std;
int BuscaBinaria(int pi[], int busca, int N);
void quick_sort(int pi[], int inicio, int fim);
int main(){

	ios_base::sync_with_stdio(false);

	int N, j, menor, aux, p;
	cin >> N;
	int pi[N];
	for (int i = 0; i < N; i++){
		cin >> pi[i];
	}
	
	quick_sort(pi, 0, N-1);

	while(cin >> p){
		
		if (BuscaBinaria(pi,p, N) == 1){
			cout << "sim\n";
		}
		else{
			cout << "nao\n";
		}


	}

}

int BuscaBinaria(int pi[], int busca, int N){

	int ini = 0, fim = N-1;	
	
	while (ini <= fim){
		int m = (ini+fim)/2;
		if(busca > pi[m])
			ini = m+1;
		else if(busca < pi[m])
			fim = m-1;
		else
			return 1;
	}
	return 0;

}

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

	


