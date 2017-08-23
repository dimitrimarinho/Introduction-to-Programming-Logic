#include<iostream>
using namespace std;
int f91 (int N);
int main(){

	int N;
	while(cin >> N, N != 0){

		cout << "f91(" << N << ") = " << f91(N) << endl;		
	
	}

}

int f91 (int N){

	if (N >= 101)
		return (N - 10);
	if (N <= 100)
		return f91(f91(N+11));
}
