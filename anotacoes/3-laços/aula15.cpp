#include <iostream>

using namespace std;

// Comando break;

int main(){

    int num=0;

    while(true){
		cout << num << ": Alora!\n";

		if(num == 10){
			break;
		}
		num++;
	}

    return 0;
}