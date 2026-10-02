#include <iostream>
using namespace std;

int main() {

    string operador;
    float  numero1, numero2;
    while (operador != "sair"){
        cout  <<  "\nqual o operador matematico da conta?";
        cin >> operador;

        cout  <<  "\nqual o primeiro numero?";
        cin >> numero1;

        cout  <<  "\nqual o segundo numero?";
        cin >> numero2;


        if (operador == "/" &&  numero2 != 0){
            cout << numero1 / numero2;

        }  else if (operador == "/" && numero2 == 0){
            cout  << "e impossivel dividir por 0";

        } else if (operador  == "+"){
            cout << numero1 + numero2;

        } else if  (operador == "-"){
            cout << numero1 - numero2;

        } else if (operador == "*"){
            cout << numero1 * numero2;
        } else{
            cout << "digite um operador valido \n";
        }

    }

}
