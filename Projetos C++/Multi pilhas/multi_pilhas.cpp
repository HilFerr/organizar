#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int npilhas = 3, nelementos=10;
string p3lhas[3][10] = {
 { "", "", "", "", "", "", "", "", "", "" },
 { "", "", "", "", "", "", "", "", "", "" },
 { "", "", "", "", "", "", "", "", "", "" }
};

void mostrapilha () {
    cout << "\n*** A MINHA PILHA ***";

    for (int y=nelementos-1; y>=0; y--){
        for (int x=0; x<npilhas; x++){
            if (x>0) cout << " | ";
            if (p3lhas[x][y] != "") {
            cout << p3lhas[x][y];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "-----------";
    for (int x=0; x<npilhas; x++) {
        if (x>0) cout << " | ";
        cout << x;

    }
    cout << endl << endl;
}

void pedirelemento () {

    int qualpilha;
    string  elemento;
    bool encontroulivre = false;

    cout << "\nEm que pilha quer colocar o elemento (0 / 1 / 2)? : ";
    cin >> qualpilha;

    cout << "\nQual o elemento a colocar na pilha[" << qualpilha << "] : ";
    cin >> elemento;

    for (int i=0; i<nelementos; i++) {
        if (p3lhas[qualpilha][i] == "") {
            p3lhas[qualpilha][i] = elemento;
            mostrapilha();
            encontroulivre = true;
            break;
        }
    }
}

int main() {

    int op = 0;
    string valor = "";

    mostrapilha();

    do {
        cout << "\n*** 3 PILHAS ARRAY 2 DIMENSOES ***\n" << endl << endl;
        cout << "O que pretende fazer ?\n";
        cout << "1 - inserir elemento em pilha\n";
        cout << "2 - mostrar pilha\n";
        cout << "0 - sair\n\n";
        cin >> op;
        switch (op) {
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrapilha();
                break;
            default: break;
        }
    } while (op!=0);

    return 0;
}
