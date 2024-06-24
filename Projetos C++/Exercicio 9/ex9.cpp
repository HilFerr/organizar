#include <iostream>

using namespace std;

/** função de inicialização do programa **/
int main() {

    int nidades, soma=0;
    int j=0;
    int idadeaux = 0;
    float media = 0;

    cout << "Insira o numero de idades que quer: ";
    cin >> nidades;

    int idades[nidades];

    for (int j=0; j<nidades; j++) {
        cout << "\nQual a idade #" << (j+1) << ": ";
        cin >> idadeaux;//idades[j];
        if (idadeaux>0) {
            idades[j] = idadeaux;
            soma = soma + idadeaux;
        } else {
            j--;
        }
    }

    cout << "\nA media e: " << ((float)soma / (float)nidades);

    return 0;
}
