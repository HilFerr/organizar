#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

const int numModulosProgramacao = 6;
const int numModulosMatematica = 3;

struct areas {
    string areaNome;
    string moduloNome[15];
    int moduloNota[15];
};

void mostraModulos (areas x, int numModulos) {
    for (int i=0; i<numModulos; i++) {
        cout << x.moduloNome[i] << endl;
    }
}

int main () {

    areas notasprogramacao;
    areas notasmatematica;

    ///////////////////////////////////////////////

    notasprogramacao.areaNome = "Programacao";
    notasprogramacao.moduloNome[0] = "Algoritmia";
    notasprogramacao.moduloNome[1] = "Estrutura e Metodologias de Programacao";
    notasprogramacao.moduloNome[2] = "C++ - Fundamento";
    notasprogramacao.moduloNome[3] = "C++ - Avancado";
    notasprogramacao.moduloNome[4] = "java";
    notasprogramacao.moduloNome[5] = "java web";

    notasprogramacao.moduloNota[0] = 14;
    notasprogramacao.moduloNota[1] = 16;

    /////////////////////////////////////////////////

    notasmatematica.areaNome = "Matematica";
    notasmatematica.moduloNome[0] = "Geometria";
    notasmatematica.moduloNome[1] = "Funcoes polinomiais";
    notasmatematica.moduloNome[2] = "Estatisticas";

    notasprogramacao.moduloNota[0] = 16;
    notasprogramacao.moduloNota[1] = 0;
    notasprogramacao.moduloNota[2] = 0;

    /////////////////////////////////////////////////

    cout << "MODULOS DE PROGRAMACAO\n" << endl;
    mostraModulos (notasprogramacao, numModulosProgramacao);

    cout << endl << "\nMODULOS DE MATEMATICA\n" << endl;
    mostraModulos (notasprogramacao, numModulosMatematica);

    return 0;
}
