#include <iostream>

using namespace std;

// Comando de Laço while

int main(){
	
	int num=0, cont=0;
	
	// Estrutura Básica:
	/*
	while(expressão){
		operações
	}
	*/
	while(num < 11){
		cout << num << "\n";
		num++;
	}
	
	while(true){
		cout << "Palmeiras não tem mundial!\n";
		
		if(cont == 20){
			break;
		}
		cont++;
	}
	
	return 0;
}