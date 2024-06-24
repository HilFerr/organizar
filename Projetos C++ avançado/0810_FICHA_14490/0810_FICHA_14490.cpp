#include <iostream>
#include <string>

using namespace std;

struct Veiculo {
    string tipoVeiculo;
    string marca;
    string modelo;
    string matricula;
    int ano;
};

void colocarDadosMeu (Veiculo &meuVeiculo) {
    meuVeiculo.tipoVeiculo = "Carro de Passageiros";
    meuVeiculo.marca = "Opel";
    meuVeiculo.modelo = "Astra GTC";
    meuVeiculo.matricula = "01-XA-21";
    meuVeiculo.ano = 2019;
}

void colocarDadosProf (Veiculo &profVeiculo) {
    profVeiculo.tipoVeiculo = "Carrinha de Mercadorias";
    profVeiculo.marca = "Volkswagen";
    profVeiculo.modelo = "Polo 1.2 TDI";
    profVeiculo.matricula = "00-OX-11";
    profVeiculo.ano = 2014;
}

void mostraDados (Veiculo &meuVeiculo, Veiculo &profVeiculo) {

}

float veiculoMaisNovo (Veiculo &meuVeiculo, Veiculo &profVeiculo) {

}

int main () {

    Veiculo meuVeiculo;
    Veiculo profVeiculo;

    colocarDadosMeu(meuVeiculo);
    colocarDadosProf(profVeiculo);

    cout << "\nA minha AutoAvaliacao deste modulo e: 13" << endl;

    return 0;
}
