#include <iostream>

using namespace std;



int main () {

    int opcao;

    cout << "1 - somar \n";
    cout << "2 - subtrair \n";
    cout << "0 - sair \n";
    cout << "opcao: ";

    cin >> opcao;

    switch (opcao)
    {

        case 1:
            cout << "a";
            break;
        case 2:
            cout << "b";
            break;
        case 0:
            cout << "c";
            break;
        default:
            cout << "d";
            break;



    }

    return 0;
}
