#include <iostream>
#include <string.h>

using namespace std;

char grelha[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8' };
bool jogo_fim = false;
int posicao;
string peca = "0";
bool aceita_jogada = true;



void mostrar_grelha (){

    cout << grelha[0] << "|" << grelha[1] << "|" << grelha[2] << "|\n";
    cout << grelha[3] << "|"<< grelha[4] << "|" << grelha[5] << "|\n";
    cout << grelha[6] << "|" << grelha[7] << "|" << grelha[8] << "|";

}

bool jogo_terminou(){

    if (grelha[0] != '0' && grelha[1] !='1' && grelha[2] != '2'
        && grelha[3] =='3' && grelha[4] == '4' && grelha[5] =='5'
        && grelha[6] == '6' && grelha[7] =='7' && grelha[8] == '8' ){

        jogo_fim = true;
    } else {
        jogo_fim = false;
    }

    return jogo_fim;
}


bool ganhou(){

        if(grelha[0]==grelha[1] && grelha[0] == grelha[2]){
            jogo_fim = true;


        } else if(grelha[3] == grelha[4] && grelha[4] == grelha[5]){
            jogo_fim = true;


        } else if(grelha[6] ==grelha[7] && grelha[7] == grelha[8]){
            jogo_fim = true;

        }

 return jogo_fim;
}

void jogada(){

        switch(posicao){


            case 0:
                if (grelha[0] == '0'){
                    grelha[0] = peca[0];

                    aceita_jogada = false;
                }
                break;
            case 1:
                if (grelha[1] == '1'){
                    grelha[1] = peca[1];

                    aceita_jogada = false;
                }
                break;

            case 2:
                if (grelha[2] == '2'){
                    grelha[2] = peca[2];

                    aceita_jogada = false;
                }
                break;
            case 3:
                if (grelha[3] == '3'){
                    grelha[3] = peca[3];

                    aceita_jogada = false;
                }
                break;
            case 4:
                if (grelha[4] == '4'){
                    grelha[4] = peca[4];

                    aceita_jogada = false;
                }
                break;
            case 5:
                if (grelha[5] == '5'){
                    grelha[5] = peca[5];

                    aceita_jogada = false;
                }
                break;

            case 6:
                if (grelha[6] == '6'){
                    grelha[6] = peca[6];

                    aceita_jogada = false;
                }
                break;
            case 7:
                if (grelha[7] == '7'){
                    grelha[7] = peca[7];

                    aceita_jogada = false;
                }
                break;
            case 8:
                if (grelha[8] == '8'){
                    grelha[8] = peca[8];

                    aceita_jogada = false;
                }
                break;






        }


}


int main () {



    while(!jogo_fim){
        mostrar_grelha();

        cout << "onde quer jogar ";
        cin >> posicao;
        if (aceita_jogada){
            if(peca == "x"){
                peca = "O";
            } else{
                peca = "x";


            }
        } else{
            cout << "\nPosicao ja preenchida \n";
        }
        jogada();



    }

return 0;

}



