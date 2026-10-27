#include <iostream>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm * t =localtime(&now);

void menu(){

    cout << "\ndiga a operacao que quer fazer: ";
    cout << "\n1 - dar o ano ";
    cout << "\n2 - sair do programa\n";
}

int get_year() {

    return (t ->tm_year + 1900);

}
int get_month() {

    return (t ->tm_mon + 1);

}

int get_day() {

    return (t ->tm_mday);

}


int minha_idade(int ano, int mes, int dia){

    int aux = get_year() - ano;

    if (get_month()< mes){
        aux --;
    } else{
        if ( get_day() < dia && get_month()< mes){
            aux --;
        }

    }

    return aux;

}


int main(){
    int i;
    int resposta, ano;
    ano = get_year();

    cout << "a minha idade = " << minha_idade(2010, 7, 28) << " anos";


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
