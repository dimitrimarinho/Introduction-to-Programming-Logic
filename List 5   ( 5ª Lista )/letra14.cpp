// Link of the problem (language PT-BR): http://br.spoj.com/problems/LETRA14/
// (Name of the problem) LETRA14 - Letras

	#include<iostream>
	#include<string>
	#include<iomanip>
	using namespace std;
	int main(void){

		cout << fixed << setprecision(1);
		char c;
		string text;
		int a = 1, p = 1, e = 0;
		float r;
		cin >> c;
    		cin.ignore();
	    	getline(cin, text);
		for (int i = 0; i < text.size(); i++){
			if (text[i] == ' '){
				a++;
				p = 1;
			}
			if (text[i] == c && p == 1){
				e++;
				p = 0;
			}
		}
		// cout << e << " " << a << endl;
		r = ((float)e/a) * 100;
		cout << r << endl;

}
