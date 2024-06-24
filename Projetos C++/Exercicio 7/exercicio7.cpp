#include <iostream>

using namespace std;

/** função de inicialização do programa **/
int main() {
    int i = 0;

    while (i < 3) {
        cout << "Instrucao: " << i << "\n";
        i++;
    }

    string nome = "LUIS";
    i = 0;
    while (i <-4) {
        cout << nome[i] << endl;
        i = i + 1;
    }

    int base, expoente;
    cout << "Base a exponenciar: ";
    cin >> base;
    cout << "Qual o expoente: ";
    cin >> expoente;

    int resultado = 1;
    i = 1;
    while (i <= expoente) {
        resultado *= base;
        i++;
    }
    cout <<"\n    Resultado com o While: " << resultado;

    i = 1;
    resultado = 1;
    if (expoente>1) {
        do {
            resultado *= base;
            i++;
        }
    while (i <= expoente);
    }

    cout <<"\n    Resultado com o Do..While: " << resultado << endl;

    return 0;

}
