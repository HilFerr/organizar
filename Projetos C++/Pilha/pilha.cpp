#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int posicao=0, res;

string pilha[6];

void push() {
    if (posicao<6) {
        cout << "\n ** Numero a inserir na pilha :";
        cin >> pilha[posicao];
        posicao ++;
        system("CLS");
    } else {
        cout << "\n ** TEM DE RETIRAR ANTES DE PODER COLOCAR ** \n\n";
    }
}

void pop() {
    if (posicao>0) {
        cout << "\n ** Retirou o Elemento da pilha :";
        cout << pilha[posicao - 1] << endl << endl;
        posicao--;
    } else {
        cout << "\n ** NAO TEM ELEMENTOS NA PILHA ** \n\n";
    }
}

void top() {
  if (posicao>0) {
        cout << "TOP = " << pilha[posicao-1] << endl;
    } else {
        cout << "\n ** NAO TEM ELEMENTOS NA PILHA ** \n\n";
    }
}

void mostrarPilha() {
    for (int i=0;i<posicao; i++) {
        cout << "Pilha [" << i << "] = " << pilha[i] << endl;
    }
}

int main () {

    int op, continua=true;

    do {
        cout << "\n*** PILHA / STACK *** \n\n\n";
        cout << "O que pretende fazer ? \n";
        cout << "1 - push - inserir na pilha \n";
        cout << "2 - pop - retirar elemento da pilha \n";
        cout << "3 - top - elemento no topo da pilha \n";
        cout << "4 - mostrar - mostrar pilha \n";

        cin >> op;

        switch (op) {
            case 1:
                push ();
                break;
            case 2:
                pop ();
                break;
            case 3:
                top ();
                break;
            case 4:
                mostrarPilha ();
                break;
            default:
                continua = false;
                break;
            }

    }while (continua);

    return 0;
}
