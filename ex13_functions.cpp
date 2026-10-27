#include <iostream>

using namespace std;

void menu(){

    cout << "\ndiga a operacao que quer fazer: ";
    cout << "\n1 - dar o ano ";
    cout << "\n2 - sair do programa\n";
}

int get_year() {

    return 2026;

}

int main(){
    int i;
    int resposta, ano;
    ano = get_year();

    do{
        menu();

        cin >> resposta;

        if (resposta == 1){

            cout << "\nestamos em " << ano;
            i--;

        } else if(resposta == 2){

            i=2;

        } else {

            cout << "opcao invalida";

            i=2;
        }
    }while(i <0);

    return 0;
}
