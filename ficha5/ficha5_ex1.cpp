#include <iostream>

using namespace std;
const int N = 10;

int main(){

    int numeros[N], soma, aux;
    soma = 0;
    aux = 0;

    for(int i; i<N; i++){
        cout << "escreva um numero e farei a somas dos quadrados dele ";
        cin >> numeros[N];
       // cout << numeros [N];

        soma = numeros[N] * numeros[N];
        aux = aux + soma;
    }

    cout << aux;

return 0;
}
