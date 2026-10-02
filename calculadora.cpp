#include <iostream>
using namespace std;

int main() {
    string operacao;
    float numero1, numero2;
    cout  <<  "operadores matematicos: \n";
    cout  <<  "somar\n";
    cout  <<  "subtrair\n";
    cout  <<  "multiplicar\n";
    cout  <<  "dividir\n";

    cout  <<  "qual o operador matematico da conta? ";
    cin >> operacao;

    cout  <<  "qual o primeiro numero? ";
    cin >> numero1;

    cout  <<  "qual o segundo numero? ";
    cin >> numero2;


    if (operacao  == "somar"){
        cout << numero1 + numero2;

    } else if  (operacao == "subtrair"){
        cout << numero1 - numero2;


    } else if (operacao == "multiplicar"){
        cout << numero1 * numero2;

    } else if (operacao == "dividir"){
        if (numero2 == 0){
            cout << "impossivel fazer o calculo";
            cout << "o numero 2 nao pode ser 0";
        } else{
            cout  << numero1 / numero2;
            }

    } else{
      cout << "digite um operador valido";
    }

}

















