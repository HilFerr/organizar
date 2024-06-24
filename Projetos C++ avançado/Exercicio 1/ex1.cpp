#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

const int numAutocarros = 26;
int soma;

struct bus {
    string linha;
    string trajeto;
    string horas;
    int capacidade;
    string condutor;
};

void mostrarMotoristas(bus autocarros[numAutocarros], int numAutocarro) {
    for (int i=0; i<numAutocarro; i++) {
        soma += autocarros[i].capacidade;
    }
    cout << soma;
    getch();
}

void pedirelemento(bus autocarros[numAutocarros], int numAutocarro) {
    string aux = "";
    int i;
    bool linhaOK = true;

    system("cls");

    do {
        linhaOK = true;
        fflush(stdin);
        cout << "\n\n Qual a linha do autocarro: ";
        getline(cin,aux);

        for (int i=0; i<numAutocarro; i++) {
            if (aux == autocarros[i].linha) {
                linhaOK = false;
                cout << "\n\n * a linha " << aux << " ja existe!\n";
            }
        }
    } while (!linhaOK);
    autocarros[numAutocarro].linha = aux;

    fflush(stdin);
    cout << "\n Escreva as paragens do autocarro: ";
    getline(cin,autocarros[numAutocarro].trajeto);

    fflush(stdin);
    cout << "\n Escreva a que horas acontecem as paragens: ";
    getline(cin,autocarros[numAutocarro].horas);

    fflush(stdin);
    cout << "\n Qual a capacidade do autocarro: ";
    cin >> autocarros[numAutocarro].capacidade;

    fflush(stdin);
    cout << "\n Quem e o condutor: ";
    getline(cin,autocarros[numAutocarro].condutor);
    i++;
}

int main() {

    bus autocarros[numAutocarros];
    int autocarroInicial = 0;
    string op = "";

sector_elementos:


    do{
        cout << "\nQueres adicionar autocarros? " << endl;
        cout << "1 - sim" << endl;
        cout << "2 - motoristas" << endl;
        cout << "0 - nao\n" << endl;
        cin >> op;

        if(op == "1") {
            pedirelemento(autocarros, autocarroInicial);
            autocarroInicial++;
        }

        if(op == "2") {
            mostrarMotoristas(autocarros, autocarroInicial);
        }

        //op = "";
    } while (autocarroInicial < numAutocarros && op!="0");

    goto sector_elementos;

    system("cls");

    return 0;
}
