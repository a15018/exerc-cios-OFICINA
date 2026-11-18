#include <iostream>
#include <stdio.h>
using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void mostrar_tabuleiro(string arr[LINHAS][COLUNAS]);
int pede_peca_jogador();
bool coloca_peca_tabuleiro(string peca, int linha, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiro_cheio(string arr[LINHAS][COLUNAS]);
bool ganhou_jogo (int &quem_ganhou, string arr[LINHAS][COLUNAS]);

int main(){
        string tabuleiro[LINHAS][COLUNAS];
        do {
            // mostrar tabuleiro atual
            // pedir a posiçao onde quer jogar e especificar quem é o jogador
            //verificar se pode jogar ou nao onde pretende
            // verificar se depois de aceitar a jogada se ganhou ou nao

        }while()

/*
        tabuleiro[0][1] = "s";
        mostrar_tabuleiro(tabuleiro);
        mostrar_tabuleiro(tabuleiro);
*/
    return 0;
}

void mostrar_tabuleiro(string arr[LINHAS][COLUNAS]){
    /*cout << "\nlinhas 1: colunas 2: -" << arr[0][1] << "-";
    arr[0][1] = "a";*/


}
int pede_peca_jogador(){
    return 0;
}
bool coloca_peca_tabuleiro(string peca, int linha, int coluna, string arr[LINHAS][COLUNAS]){
    return false;
}
bool tabuleiro_cheio(string arr[LINHAS][COLUNAS]){
    return false;
}
bool ganhou_jogo (int &quem_ganhou, string arr[LINHAS][COLUNAS]){
    return false;
}
