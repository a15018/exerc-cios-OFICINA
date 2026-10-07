#include <iostream>

using namespace std;

int main () {
    int opcao;

    cout << "opcao 0: \n";
    cout << "opcao 1: \n";
    cout << "opcao 2: \n";
    cout << "opcao 3: \n";

    cin >> opcao;

    switch (opcao){

        case 0:
            cout << "sair do programa";
            break;
        case 1:
            cout << "e bom programador";
            break;
        case 2:
            cout << "e muito bom programador";
            break;
        case 3:
            cout << "e excelente programador";
            break;
        default:
            cout << "Nao sei o que estas a pedir";
            break;

    }

    return 0;

}
