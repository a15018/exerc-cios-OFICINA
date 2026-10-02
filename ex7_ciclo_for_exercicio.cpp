#include <iostream>

using namespace std;

int main () {

    int na,nb,nc;
    string la, lb, lc;
    na = 2;
    nb = 2;
    nc = 2;

    la = "a";
    lb = "b";
    lc = "c";

    for (int i=1; i <= (na/2); i++){
        cout << la;
    }

    for (int i=1; i <= (nb/2); i++){
        cout << lb;
    }

    for (int i=1; i <= (nc/2); i++){
        cout << lc;
    }

    for (int i=(nc/2); i < nc; i++){
        cout << lc;
    }

    for (int i=(nb/2); i < nb; i++){
        cout << lb;
    }

    for (int i=(na/2); i < na; i++){
        cout << la;
    }


    return 0;

}


/* quero imprimir o "a" 2x
   quero imprimir o "b" 2x
   quero imprimir o "c" 2x
   para ficar assim na apresentaçao pro user:
   "abccba" */
