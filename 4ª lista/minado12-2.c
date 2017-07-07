#include<stdio.h>
int main(void){

	int N;
	scanf("%d", &N);
	int mina[N];
	int minar[N];
	for (int i = 0; i < N; i++){
		scanf("%d", &mina[i]);
		minar[i] = 0;
	}
	for (int i = 0; i < N; i++){
		if (mina[i] == 1){
			minar[i-1]+= 1;
			minar[i]+= 1;
			minar[i+1]+= 1;
		}
	}
	for (int i = 0; i < N; i++){
		printf("%d\n", minar[i]);
	}
	return 0;
}
