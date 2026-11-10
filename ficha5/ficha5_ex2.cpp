#include <iostream>

using namespace std;


int main(){
    int n = 0;
    int soma = 0, numeros[n];

    cout << "quantos numero voce quer somar? ";
    cin >> n;

    if (n >20 || n<0){
        cout << "numero invalido ";
    } else{
        for (int i=0; i < n;i++){
            cout << "quais os numeros ";
            cin  >> numeros[n];
            soma = soma + numeros[n];
        }
    }
    cout << soma;


return 0;
}

