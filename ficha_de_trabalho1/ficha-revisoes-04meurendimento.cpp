#include <iostream>

using namespace std;

int main () {

    float ganho, horas, resultado, ano;

    cout << "quanto ganhas por hora? ";
    cin >> ganho;

    cout << "quantas horas trabalhas por mes? ";
    cin >> horas;

    resultado = ganho * horas;

    ano = resultado * 12;

    cout << resultado << " " << ano;


    return 0;

}


