#include <iostream>

using namespace std;

int main () {
    int numero;
    cout << "me de 1 numero";
    cin >> numero;

      if (numero < 0){
        cout << "numero negativo";

    } if (numero == 0){
        cout << "numero neutro";
    } if (numero > 0 && numero <100){
        cout << "numero positivo pequeno";
    } if (numero >= 100){
        cout << "numero enorme";
    }

    return 0;

}
