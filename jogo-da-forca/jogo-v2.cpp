#include <iostream>
#include <string.h>

using namespace std;

void imprimeNomeJogo();
void letrasMaiusculas(char []);
void criaPalavraSecreta(char [], int);

int main(){

    inicio:

    char palavra[50], palavraSecreta[50];
    char opcao[2], letra[2];
    int chances=6, cont=0;
    bool possuiLetra=false;

    imprimeNomeJogo();

    cout << "Digite uma palavra para o jogo: ";
    cin >> palavra;
    letrasMaiusculas(palavra);
    system("clear");

    criaPalavraSecreta(palavraSecreta, strlen(palavra));

    do{
        cout << "\nPalavra:\n\n    " << palavraSecreta << "\n\n";
        cout << "Você tem " << chances << " Chances Restantes!\n";
        cout << "Digite uma letra: ";
        cin >> letra;
        letrasMaiusculas(letra);

        for(int i=0; i<strlen(palavra); i++){
            if(letra[0] == palavra[i]){
                palavraSecreta[i] = letra[0];
                possuiLetra = true;
                cont++;
            }
        }

        system("clear");

        if(!possuiLetra){
            cout << "\n----A palavra não possui a letra '" << letra << "'!----\n\n";
            chances--;
        }

        possuiLetra = false;

    } while(cont != strlen(palavra) && chances != 0);

    if(cont == strlen(palavra)){
        cout << "\n---PARABÉNS! Você Ganhou!---\n\n";
    } else{
        cout << "\n---Boa Tentativa!---\n\n";
    }

    cout << "Deseja ir mais uma [S/N]?";
    cin >> opcao;
    letrasMaiusculas(opcao);

    if(opcao[0] == 'S'){
        system("clear");
        goto inicio;
    } else{
        cout << "\n---Até logo!---\n\n";
    }

    return 0;
}

void imprimeNomeJogo(){
    cout << "--------------------\n";
    cout << "----Jogo da Forca---\n";
    cout << "--------------------\n";
}

void letrasMaiusculas(char palavra[]){
    int tamanhoStr = strlen(palavra);

    for(int i=0; i<tamanhoStr; i++){
        palavra[i] = toupper(palavra[i]);
    }
}

void criaPalavraSecreta(char palavraSecreta[], int tamanhoStr){
    for(int i=0; i<tamanhoStr; i++){
        palavraSecreta[i] = '-';
    }
    palavraSecreta[tamanhoStr] = '\0';
}