#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>  /* printf, scanf, puts, NULL */

using namespace std;

double resultado=0;

void soma () {

    int num1, num2;

    cout << "*** SOMA DE 2 NUMEROS INTEIROS \n";
    cout << "1.NUM \n";
    cin >> num1;
    cout << "2.NUM \n";
    cin >> num2;

    cout << "SOMA = " << (num1 + num2) << endl << endl;
}

void subtrair () {

    int num1, num2;

    cout << "SUBTRACAO = " << (num1 - num2) << endl << endl;
}

double dividir() {

    int num1, num2;

    cout << "*** DIVISAO DE 2 NUMEROS INTEIROS \n";
    cout << "1.NUM \n";
    cin >> num1;
    cout << "2.NUM \n";
    cin >> num2;

    return (double)num1/(double)num2;
}

double multiplicar(int x, int y) {
    return (double)x * (double)y;
}

int main () {

    char op = '0';

    do {
        printf("Qual a operacao que deseja efetuar ? \n");
        printf("1 - Somar \n");
        printf("2 - Subtrair \n");
        printf("3 - Multiplicar \n");
        printf("4 - Dividir \n");
        printf("0 - Fechar App \n");
        scanf("%d", &op);

        switch (op) {

            case 1:
                soma();
                break;

            case 2:
                subtrair();
                break;

            case 3:
                int num1, num2;
                cout << "*** MULTIPLICACAO DE 2 NUMEROS INTEIROS \n";
                cout << "1.NUM \n";
                cin >> num1;
                cout << "2.NUM \n";
                cin >> num2;
                resultado = multiplicar(num1, num2);
                cout << "\nResultado: " << resultado << endl << endl;
                break;

            case 4:
                resultado = dividir();
                cout << "\nResultado: " << resultado << endl << endl;
                break;
        }

    } while (op != '0');

    return 0;
}
