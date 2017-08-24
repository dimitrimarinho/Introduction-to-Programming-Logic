#include<iostream>
#include<cstring>
using namespace std;
int rumo9s(char s[1000], int degree);
int main(){

	char s[1000] = {};
	
	cin >> s;
	
	if(s[0] == '0'){
		return 0;
	}
	
	int degree = rumo9s(s,1);
	
	if (degree != -1){
		cout << s << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
	}
	else if (degree == -1){
		cout << s << " is not a multiple of 9." << endl;
	}
	main();
	
}
		
int rumo9s(char s[1000], int degree){
	
    int soma = 0;
	for (int i = 0; i < strlen(s); i++){
		soma += s[i] - 48;
	}
	if(soma < 9){
		return -1;
	}
	if(soma > 9){
		
		char temporary[1000] = {};
		sprintf(temporary, "%d", soma);
		return rumo9s(temporary, degree+1);
	}

	return degree;
}

