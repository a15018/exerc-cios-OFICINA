#include <iostream>

using namespace std;

int factorial(int numero){
    if (numero == 1 || numero == 0){
        return 1;
    } else {
        return numero * factorial(numero - 1);
    }

}

int fibonacci(int numero){
    if (numero == 1 || numero == 2){
        return 1;
    } else {
        return fibonacci(numero - 1) + fibonacci( numero -2);
    }

}


int main (){

    int n = 5;
    int f = 12;


    cout << factorial(n) << "\n";
    cout << fibonacci(f);


return 0;
}
