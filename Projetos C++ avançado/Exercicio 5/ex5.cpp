#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

const int numEuropa = 5;
const int numAfrica = 5;

void populareuropa(string continente [numEuropa]) {
    continente [0] = "PORTUGAL";
    continente [1] = "ESPANHA";
    continente [2] = "FRANCA";
    continente [3] = "INGLATERRA";
    continente [4] = "ITALIA";

}

void popularafrica(string continente [numAfrica]) {
    continente [0] = "MARROCOS";
    continente [1] = "ARGELIA";
    continente [2] = "ANGOLA";
    continente [3] = "MOCAMBIQUE";
    continente [4] = "EGIPTO";

}

void mostraTabelaPais(string nomePaissorteado, string aglomeraLetras){
    bool temLetra;
    cout << endl << endl;
    for (int i=0; i<nomePaissorteado.length(); i++) {
        temLetra = false;
        for (int j=0; j<aglomeraLetras.length(); j++) {
            if (nomePaissorteado[i] == aglomeraLetras[j]) {
                temLetra = true;
            }
        }
        if (temLetra) {
            cout << nomePaissorteado[i] << " ";
        } else {
        cout << "_" << " ";
        }
    }
    cout << endl;
}

bool verificaSeJaEscolheu(string aglomeraLetras, char LetraAverificar){
    for (int i=0; i<aglomeraLetras.length(); i++) {
        if (aglomeraLetras[i] == LetraAverificar) {
            return true;
        }
    }
    return false;
}

bool verificaSeLetraExiste(string nomePais, char letraAverificar){
    for (int i=0; i<nomePais.length(); i++) {
        if (nomePais[i] == letraAverificar) {
            return true;
        }
    }
    return false;
}

void mostraLetrasEscolhidas(string letrasEscolhidas) {
    cout << "\n*** LETRAS ESCOLHIDAS: ";
    for (int i=0; i<letrasEscolhidas.length(); i++) {
        cout << letrasEscolhidas[i];
        cout << " ";
    }
}

bool verificaAdivinhou(string nomePaissorteado, string aglomeraLetras) {
    bool temLetrasTodas = true;
    bool temLetra;
    for (int i=0; i<nomePaissorteado.length(); i++) {
        temLetra = false;
        for (int j=0; j<aglomeraLetras.length(); j++) {
            if (nomePaissorteado[i] == aglomeraLetras[j]) {
                temLetra = true;
            }
        }
        if (!temLetra) temLetrasTodas = temLetra;
    }
    return temLetrasTodas;
}

int main() {

    int tentativas = 5;
    bool jogoterminou = false;
    string escolhaContinente;
    string europa[numEuropa];
    string africa[numAfrica];

    populareuropa(europa);
    popularafrica(africa);

    do {
        cout << "jogo da forca\n\n";
        cout << "qual continente quer jogar?\n";
        cout << "1- europa\n";
        cout << "2- africa\n";
        cout << "0- sair\n";
        cout << "R: ";

        cin >> escolhaContinente;
        cout << endl << endl;

    } while (escolhaContinente != "0"
             && escolhaContinente != "1"
             && escolhaContinente != "2");

    if(escolhaContinente == "1" || escolhaContinente == "2"){
        int numPaisSorteado;
        string nomePaisSorteado;
        string aglomeraLetras;
        char letraEscolhida;

        if (escolhaContinente == "1") {
            numPaisSorteado = rand() % numEuropa;
            nomePaisSorteado = europa[numPaisSorteado];
        } else if (escolhaContinente == "2") {
            numPaisSorteado = rand() % numAfrica;
            nomePaisSorteado = africa[numPaisSorteado];
        }


        do {
                cout << "\nTem " << tentativas << " tentativas para divinhar \n\n";

                mostraTabelaPais(nomePaisSorteado, aglomeraLetras);

                cout << endl << "Diga uma letra para verificar: ";
                cin >> letraEscolhida;
                letraEscolhida = (char)toupper(letraEscolhida);

                bool existe, escolhida;
                escolhida = verificaSeJaEscolheu(aglomeraLetras, letraEscolhida);
                if (escolhida) {
                    cout << endl << "A sua letra " << letraEscolhida;
                    cout << " ja tinha sido escolhida!!" << endl;
                } else {
                    aglomeraLetras = aglomeraLetras + letraEscolhida;
                    existe = verificaSeLetraExiste(nomePaisSorteado, letraEscolhida);
                    if (existe) {
                        jogoterminou = verificaAdivinhou(nomePaisSorteado, aglomeraLetras);
                    } else {
                        tentativas--;
                    }
                }

        } while(tentativas>0 && !jogoterminou);

        if (jogoterminou && tentativas>0) {
            cout << "PARABENS ... ACERTOU NA PALAVRAS \n\n";
            cout << nomePaisSorteado << "\n\n";
            mostraTabelaPais(nomePaisSorteado, aglomeraLetras);
        }


    } else {

    }

    return 0;
}
