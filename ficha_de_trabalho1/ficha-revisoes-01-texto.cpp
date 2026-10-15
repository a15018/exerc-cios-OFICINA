#include <iostream>

using namespace std;

int main () {

    string nome, localidade, mensagem, genero;
    int idade;

    cout << "qual o seu nome? " << endl;
    cin >> nome;

    cout << "qual o sua idade? " << endl;
    cin >> idade;

    cout << "Em que localidade moras? " << endl;
    cin >> localidade;

    cout << "qual o seu genero?(M/F) " << endl;
    cin >> genero;

    if (idade >=18){
        mensagem = " e maior de idade";
    } else {
        mensagem = " e menor de idade";
    }

    mensagem = nome + mensagem + " e mora em " + localidade;

    if (genero == "M"){
        mensagem = "Caro Sr. " + mensagem;
    } else if (genero == "F"){
        mensagem = "Cara Sra. " + mensagem;
    }

    cout << mensagem;

    return 0;

}
