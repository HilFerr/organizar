#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

void naodevolvenada () {
}

int devolveinteiro () {
}

int devolveinteiro_recebeinteiro(int x) {
    return x*x;
}

int factorial(int numero) {
    if (numero>=2) {
        return numero * factorial(numero - 1);
    } else {
        return 1;
    }
}

int potencia(int base, int expoente) {
     if (expoente > 1) {
        return base * potencia(base, expoente-1);
     } else if (expoente == 0) {
        return 1; // 2^0 = 1
     } else {
        return base;
     }
}

int arrayNum[10] = {1,2,3,4,5,6,7,8,9,10};

void inverterarray() {

}

int * inverterarray(int omeuarray[], int inicio, int fim){
    int aux;
    if (inicio < fim) {
        aux = omeuarray[inicio];
        omeuarray[inicio] = omeuarray[fim];
        omeuarray[fim] = aux;
        inverterarray(omeuarray, (inicio+1), (fim-1));
    }
}

int main() {

    int aux;
    int arrayNum[10] = {1,2,3,4,5,6,7,8,9,10};
    int inicio = 0, fim = 9;

    inverterarray(arrayNum, inicio, fim);

    cout << factorial(4);
    cout << potencia(4, 4) << endl;

    /*
    cout << devolveinteiro_recebeinteiro(2) << endl;
    cout << devolveinteiro_recebeinteiro(3) << endl;
    cout << devolveinteiro_recebeinteiro(4) << endl;
    cout << devolveinteiro_recebeinteiro(5) << endl;
    */

    return 0;
}
