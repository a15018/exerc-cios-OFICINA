
#include <iostream>

using namespace std;

char grelha[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
int posicao;
char peca = 'X';
bool jogo_fim = false;

void mostrar_grelha() {
    cout << "\n";
    cout << grelha[0] << "|" << grelha[1] << "|" << grelha[2] << "\n";
    cout << "-----\n";
    cout << grelha[3] << "|" << grelha[4] << "|" << grelha[5] << "\n";
    cout << "-----\n";
    cout << grelha[6] << "|" << grelha[7] << "|" << grelha[8] << "\n";
}

bool ganhou() {

    if (grelha[0] == grelha[1] && grelha[1] == grelha[2])
        return true;
    if (grelha[3] == grelha[4] && grelha[4] == grelha[5])
        return true;
    if (grelha[6] == grelha[7] && grelha[7] == grelha[8])
        return true;


    if (grelha[0] == grelha[3] && grelha[3] == grelha[6])
        return true;
    if (grelha[1] == grelha[4] && grelha[4] == grelha[7])
        return true;
    if (grelha[2] == grelha[5] && grelha[5] == grelha[8])
        return true;

    if (grelha[0] == grelha[4] && grelha[4] == grelha[8])
        return true;
    if (grelha[2] == grelha[4] && grelha[4] == grelha[6])
        return true;

    return false;
}

bool jogo_terminou() {
    if (ganhou())
        return true;

    for (int i = 0; i < 9; i++) {
        if (grelha[i] >= '0' && grelha[i] <= '8')
            return false;
    }

    return true;
}

void jogada() {
    if (posicao < 0 || posicao > 8) {
        cout << "Posicao invalida!\n";
        return;
    }

    if (grelha[posicao] == 'X' || grelha[posicao] == 'O') {
        cout << "Posicao ja preenchida!\n";
        return;
    }

    grelha[posicao] = peca;
}

int main() {
    while (!jogo_fim) {
        mostrar_grelha();

        cout << "\nJogador " << peca;
        cout << ", escolha uma posicao (0-8): ";
        cin >> posicao;

        jogada();

        if (posicao < 0 || posicao > 8)
            continue;

        if (grelha[posicao] != peca)
            continue;

        if (ganhou()) {
            mostrar_grelha();
            cout << "\nO jogador " << peca << " ganhou!\n";
            jogo_fim = true;
        }
        else if (jogo_terminou()) {
            mostrar_grelha();
            cout << "\nEmpate!\n";
            jogo_fim = true;
        }
        else {

            if (peca == 'X')
                peca = 'O';
            else
                peca = 'X';
        }
    }

    return 0;
}

