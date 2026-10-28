#include <iostream>
#define N 5


using namespace std;
float notas[N];
float media;
float maior;
int aprovado = 0;

void ler_notas(){

    cout << "nota do primeiro aluno ";
    cin >>  notas[0];
    if (notas[0]<0 || notas[0] >20){

        cout << "notas invalidas apenas de 0 a 20";
    }

    cout << "\nnota do segundo aluno ";
    cin >>  notas[1];
    if (notas[1]<0 || notas[1] >20){

        cout << "notas invalidas apenas de 0 a 20";
    }


    cout << "\nnota do terceiro aluno ";
    cin >>  notas[2];
    if (notas[2]<0 || notas[2] >20){

        cout << "notas invalidas apenas de 0 a 20";
    }


    cout << "\nnota do quarto aluno ";
    cin >>  notas[3];
    if (notas[3]<0 || notas[3] >20){

        cout << "notas invalidas apenas de 0 a 20";
    }


    cout << "\nnota do quinto aluno ";
    cin >>  notas[4];
    if (notas[4]<0 || notas[4] >20){

        cout << "notas invalidas apenas de 0 a 20";
    }


}

int calcular_media(){

media = (float((notas[0]+ notas[1] + notas[2]  + notas[3] + notas[4])/ 5.0)) ;


return media;
}
int maior_nota() {

    if (notas[0] > notas[1] && notas[0] > notas[2] && notas[0] > notas[3] && notas[0] > notas[4]){

        maior = notas[0];
    } else if (notas[1] > notas[2] && notas[1] > notas[3] && notas[1] > notas[4]){
        maior = notas[1];
    } else if (notas[2] > notas[3] && notas[2] > notas[4]){
        maior = notas[2];
    } else if (notas[3] > notas[4] ){
        maior = notas[3];
    } else{
         maior = notas[4];
    }


return maior;
}

int contar_aprovados(){

    if (notas[0] >= 10){
        aprovado ++;
    } if (notas[1] >= 10){
        aprovado++;
    } if (notas[2] >= 10){
        aprovado++;
    } if (notas[3] >= 10){
        aprovado++;
    } if (notas[4] >= 10){
        aprovado++;
    }

return aprovado;
}



int main (){

    ler_notas();

    cout << "media = " << calcular_media();
    cout << "\nmaior nota = " << maior_nota();
    cout << "\nalunos aprovados:  " << contar_aprovados();


return 0;

}

