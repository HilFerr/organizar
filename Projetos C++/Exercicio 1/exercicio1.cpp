
#include <iostream>

using namespace std;

/** função de inicialiazação do programa **/
int main() {

    int numero;
    string nome, sobrenome, resposta;

    nome = sobrenome = "rodrigo";
    sobrenome = "azevedo";

    cout << "__________________________________________";
    cout << "\n\t";
    cout << "Bom dia " << nome << " " << sobrenome;
    cout << ",\n\n\t Vamos criar o quadrado de um numero ? \n";
    cout << "\t Escreva o numero: " << endl;

    cin >> numero;

    system("cls"); // limpar tela
    if (numero > 0) {
        cout << "0 " << numero << " ao quadrado = " << (numero * numero) << endl;
    } else if (numero == 0) {
        cout << " 0 x 0 = 0 ?!?!?! daahhhhhh ";
    } else {
        cout << "apenas aceitamos numeros positivos !!!";
    }

    return 0;
}
