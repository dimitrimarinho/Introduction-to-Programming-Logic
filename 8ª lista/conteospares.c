#include<stdio.h>
int BuscaBinaria(int verpares[], int busca, int N);
void quick_sort(int *a, int left, int right);
int main(void){

	int N, K, aux, menor, pares = 0;
	scanf("%d%d", &N, &K);
	int verpares[N];
	for (int i = 0 ; i < N; i++){
		scanf("%d", &verpares[i]);
	}

	quick_sort(verpares, 0, N-1);

	for(int i = 0; i < N; i++){
		if (BuscaBinaria(verpares,verpares[i] - K, N) == 1){
			pares+=1;
		}
		if (BuscaBinaria(verpares,verpares[i] + K, N) == 1){
			pares+=1;
		}
	} 

	printf("%d\n", (pares/2));

}

	int BuscaBinaria(int verpares[], int busca, int N){
	
	int ini = 0, fim = N-1;	
		
		while (ini <= fim){
			int m = (ini+fim)/2;
			if(busca > verpares[m])
				ini = m+1;
			else if(busca < verpares[m])
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



	/* Verificar Ordenação

		printf("\n");
	for (int p = 0; p < N; p++){
		printf("%d ", verpares[p]);
	} */ 



