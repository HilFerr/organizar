#include <iostream>
#include <string>

using namespace std;

struct Hotel {
    string nome = "";
    string link = "";
    string cidade = "";
    int numEstrelas;
    double quartos[500];

};

void inicializar (Hotel &x1) {
    x1.nome = "Pensao Sao Bento";
    x1.link = "https://www.pensaosaobento.pt/";
    x1.cidade = "Santo Tirso";
    x1.numEstrelas = 2;

    for (int i = 0; i < 500; i++) {
        x1.quartos[i]=0;
    }

    x1.quartos[1] = 10;
    x1.quartos[2] = 20;
    x1.quartos[3] = 30;
    x1.quartos[4] = 40;
    x1.quartos[5] = 50;

};

float mostraMaxQuartos (double dados[500]) {
    double maxs = 0;
    for (int i = 0; i < 500; i++) {
        if (dados[i]>maxs) {
            maxs = dados[i];
        }
    }
    return maxs;
};

double mostraMediaPrecosQuartos (double dados[500]){
    double totalsoma;
    double numElementos = 0;

    for (int i = 0; i < 500; i++) {
        if (dados[i]>0) {
            totalsoma += dados[i];
            numElementos ++;

        }
    }
    return totalsoma/numElementos;
};

int main () {
    double media, maxValor;
    Hotel pensaoSaoBento;
    inicializar(pensaoSaoBento);
    cout << pensaoSaoBento.quartos[2];
    media = mostraMediaPrecosQuartos(pensaoSaoBento.quartos);
    maxValor = mostraMaxQuartos(pensaoSaoBento.quartos);
    cout << maxValor;

    return 0;
}
