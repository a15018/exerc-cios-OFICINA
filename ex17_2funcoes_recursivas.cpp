#include <iostream>

using namespace std;


char funcaoAscii(int numero) {

    if (numero <= 255){

        cout << numero << " "<< char(numero) << endl;
        numero++;
        return funcaoAscii(numero);

    } else{
        return ' ';
    }

}


int main (){

    cout << funcaoAscii(0);


return 0;
}
