#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double resultado = 0;

void soma(num1, num2) {
    cout << "SOMA = " << (num1 + num2) << endl << endl;
}

void subtrair(num1, num2) {
    cout << "SUBTRACAO = " << (num1 - num2) << endl << endl;
}

double dividir(num1, num2) {
    return (double)num1/(double)num2;
}

double multiplicar(int x, int y) {
    return (double)x * (double)y;
}

int main () {

    char op = '0';

    do {
        // User Interactive Form
        cout << "Qual a operacao que deseja efetuar? \n";
        cout << "1 - Somar \n";
        cout << "2 - Subtrair \n";
        cout << "3 - Multiplicar \n";
        cout << "4 - Dividir \n";
        cout << "0 - Fechar App \n";
        cin >> op;

        system("cls");

        switch (op) {
            // Soma
            case 1:
                soma();
                break;

            // Subtrair
            case 2:
                subtrair();
                break;

            // Multiplicação
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

            // Dividir
            case 4:
                resultado = dividir();
                cout << "\nResultado: " << resultado << endl << endl;
                break;
        }
    } while (op != '0');

    return 0;
}
