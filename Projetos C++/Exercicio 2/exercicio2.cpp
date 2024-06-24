#include <iostream>

using namespace std;

int main() {

    int 1, 2, 3, 4;

    cout << "Que acao pretende executar?\n";
    cout << "- para soma prime 1\n";
    cout << "- para subtracao prime 2\n";
    cout << "- para divisao prime 3\n";
    cout << "- para multiplicacao prime 4\n";

    cout << "\n Digite o 1ºnumero: " << endl;
    cin >> x;

    cout << "\n Digite o 2ºnumero: " << endl;
    cin >> y;

    system("cls"); // limpar tela
    if () {
        for (i = 1; i <= expoente; i++){
            resultado = resultado * base;
        }
        cout << "O resultado = " << resultado;
    } else if (expoente == 0) {
        cout << "0 resultado = 1";
    } else {
        for (i = 1; i <= (expoente * -1); i++){
            resultado = resultado * base;
            cout << resultado << endl;
        }
        cout << x << endl;
        cout << "Resultado: " << (1 / resultado);
    }

    return 0;
}
