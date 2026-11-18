#include <iostream>
#include <stdio.h>

using namespace std;

void mostra_msg();
void troca(int &x,int &y);


int main(){


    int a=5, b=3;

    mostra_msg();
    troca(a,b);

    cout << "\nA: " << a << " // B: " << b;

    return 0;
}



void mostra_msg(){


cout << "Estou a mostrar a funcao mostrar_msg";
}

void troca(int &x, int &y){
    int aux = x;
    x = y;
    y = aux;

}
