#include <iostream>

using namespace std;


int funcao  (int numero) {
    if (numero == 0){
        return 0;
    } if(numero >0){
        return numero + funcao(numero - 1);
    } else {
        return numero + funcao(numero + 1);

    }

}


int main (){
    int n;

    cout << "me de um numero para fazer a soma de todos os numero entre esse numero e 0: ";
    cin >> n;
    cout << funcao(n);

return 0;
}

