#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int naltura = 6, nlado=8;
string tabela[6][8] = {
 { "", "", "", "", "", "", "", "",},
 { "", "", "", "", "", "", "", "",},
 { "", "", "", "", "", "", "", "",},
 { "", "", "", "", "", "", "", "",}

};

void ola(){

}
void mostratabela () {
    cout << "\n---------- JOGO -----------\n";

    for (int y=naltura; y>=0; y--){
        for (int x=0; x<nlado; x++){
            if (x>0) cout << " | ";
            if (tabela[x][y] != "") {
            cout << tabela[x][y];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int x=0; x<nlado; x++) {
        if (x>0) cout << " | ";
        cout << x;

    }
    cout << endl << endl;
}

void pedirjogada () {

    int qualaltura;
    string  elemento;
    bool encontroulivre = false;

    cout << "\nQuem e a jogar o X ou O [" << qualaltura << "] : ";
    cin >> elemento;
    cout << "\nEm que coluna quer fazer a jogada(0 / 1 / 2 / 3 / 4 / 5 / 6 / 7)? : ";
    cin >> qualaltura;

    for (int i=0; i<nlado; i++) {
        if (tabela[qualaltura][i] == "") {
            tabela[qualaltura][i] = elemento;
            mostratabela();
            encontroulivre = true;
            break;
        }
    }
}


int main (){

do{

mostratabela();
pedirjogada();

}while (!ola);

return 0;
}
