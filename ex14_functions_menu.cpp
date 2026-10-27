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

int minha_idade(int ano_nascimento, int mes_nascimento = 0){
    return 2026 - ano_nascimento;
}


int main(){
    int i;
    int resposta, ano;
    ano = get_year();

    cout << "a minha idade = " << minha_idade(2011) << " anos\n";

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
