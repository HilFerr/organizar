#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    char op;
    int aux, numero, resto, resultado;
    string numeroaux;
    string resBin = "";

  do {

    string resBin = "";

    cout << "Qual a operacao que deseja fazer :\n";
    cout << "1 - DEC 2 BIN\n";
    cout << "2 - BIN 2 DEC \n";
    cout << "0 - FECHAR APP \n\n";
    cout << "R: ";

    cin >> op;

    if (op == '1') {
        cout << endl << "Qual o numero a converter ? ";
        cout << endl << "R: ";
        cin >> numero;
        do {
            aux = fmod(numero, 2);
            resBin = to_string(aux) + resBin;
            numero = numero / 2;
        } while (numero>1);
        resBin = to_string(numero) + resBin;
        cout << endl << "resBin: " << resBin;

    } else if (op == '2') {
            cout << endl << "Qual o numero a converter ? ";
            cout << endl << "R: ";
            cin >> numeroaux;

        int pos = 0;
        int resultado = 0;

        for (int i=(numeroaux.length() - 1); i >=0 ; i--) {
                resultado += (int(numeroaux[i]) - 48) * pow(2, pos);
                pos++;
            }
            cout << endl << "resDec: " << resultado << endl;
        } else {
            break;
        }

          cout << endl << endl;

      } while (op != '0');

      return 0;
}
