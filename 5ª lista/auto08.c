#include<stdio.h>
int main(void){

	int C, p = 0;
	scanf("%d", &C);
	char road[C];
	scanf("%s", road);
	for (int i = 0; i < C; i++){
		if (road[i] == 'P')
			p+=2;
		if (road[i] == 'C')
			p+=2;
		if (road[i] == 'A')
			p+=1;
	}
	printf("%d\n", p);


}
