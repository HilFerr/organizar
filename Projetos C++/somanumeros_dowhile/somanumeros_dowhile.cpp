#include <iostream>

using namespace std;

/** função de inicialização do programa **/
int main() {

    int resultado=0, numero = 0;
    int numerosinseridos = 0;
    float media = 0;
    string somaTxt = "";

    cout << "\nSomar numeros até que digite a tecla 0\n\n ";

    do {
        cout << "\nDiga qual o numero a somar: ";
        cin >> numero;
        if (numero != 0) {
                //if (somaTxt != "") somaTxt += " + ";
                if (somaTxt != "") {
                    somaTxt += " + ";
                }

                somaTxt += to_string(numero);
                resultado += numero;
                numerosinseridos = numerosinseridos + 1;
        }
    }
    while (numero != 0);

    cout << "Inseriu " << numerosinseridos << " numeros" << endl;

    cout << "\nResultado de (" << somaTxt << ") = " << resultado << endl;

    cout << "\nMedia de (" << somaTxt << ")/" << numerosinseridos;

    media = ((float)resultado / (float)numerosinseridos);
    cout << " = " << media;
    cout << endl;
}
