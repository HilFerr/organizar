#include <iostream>

using namespace std;

/** fun��o de inicialiaza��o do programa **/
int main() {

    string nome, sobrenome;

    cout << "Qual o seu nome? ";
    cin >> nome;
    cout << "\nE qual o seu sobrenome? ";
    cin >> sobrenome;

    system("cls"); //limpar tela

    cout << "Bom dia caro " << nome << " " << sobrenome;

}
