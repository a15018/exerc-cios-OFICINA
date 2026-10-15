#include <iostream>

using namespace std;

int main () {

    float peso, aceleracao, divisao;

    cout << "qual o seu peso? ";
    cin >> peso;

    cout << "qual a aceleraçao da gravidade? ";
    cin >> aceleracao;

    divisao = peso / aceleracao;

    cout << "sua massa e: " << divisao;

    return 0;

}

