#include <iostream>
#include <cstring>

using namespace std;

#define traco cout << "--------------------\n"
#define nomeJogo cout << "----Jogo da Forca---\n"

int main(){
    inicio: // Label

    char palavra[50], palavraSecreta[50];
    char opcao, letra;
    int chances=6, cont=0, tamPalavra=0;
    bool possuiLetra=false;

    traco;
    nomeJogo;
    traco;

    cout << "Digite uma palavra para o jogo: ";
    cin >> palavra;
    tamPalavra = strlen(palavra);

    // Limpa o terminal:
    //system("cls"); Windows
    system("clear"); // Linux

    // Deixa todas as letras da string maiúsculas
    for(int i=0; i<tamPalavra; i++){
        palavra[i] = toupper(palavra[i]);
    }

    // Atribui o caractere '-' para a string
    for(int i=0; i<tamPalavra; i++){
        palavraSecreta[i] = '-';

        if(i == tamPalavra-1){
            palavraSecreta[i+1] = '\0';
        }
    }

    do{
        cout << "\nPalavra:\n\n    " << palavraSecreta << "\n\n";
        cout << "Você tem " << chances << " Chances Restantes!\n";
        cout << "Digite uma letra: ";
        cin >> letra;
        letra = toupper(letra);

        for(int i=0; i<tamPalavra; i++){
            if(letra == palavra[i]){
                palavraSecreta[i] = letra;
                possuiLetra = true;
                cont++;
            }
        }
        if(!possuiLetra){
            cout << "\n----A palavra não possui a letra '" << letra << "'!----\n\n";
            chances--;
        }
        
        possuiLetra = false;

    } while(cont != tamPalavra && chances != 0);

    if(cont == tamPalavra){
        cout << "\n---PARABÉNS! Você Ganhou!---\n\n";
    } else{
        cout << "\n---Boa Tentativa!---\n\n";
    }

    cout << "Deseja ir mais uma [S/N]?";
    cin >> opcao;
    opcao = toupper(opcao);

    if(opcao == 'S'){
        system("clear");
        goto inicio;
    } else{
        cout << "\n---Até logo!---\n\n";
    }

    return 0;
}