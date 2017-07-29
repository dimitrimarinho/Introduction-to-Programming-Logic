// http://br.spoj.com/problems/CHAMADA1/

#include<stdio.h>
int main(void){
    
    int N, K;
    scanf("%d%d", &N, &K);
    char name[N][21];
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < 21; j++){ 
            scanf("%s", name[i][j]);
        }    
    }

}
