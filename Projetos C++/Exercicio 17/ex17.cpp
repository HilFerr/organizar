#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

struct Carro {
  string marca;
  string modelo;
  string versao;
  string matricula;
  int ano;
  string proprietario;
};

int ano = mediaIdadeCalculada;
int meses = -1;
int dias = -1;

double diasMeses = 365.0/12.0;
cout << "1 mes tem

int main () {

    Carro carro1;
    carro1.marca = "Fiat";
    carro1.modelo = "???";
    carro1.versao = "??";
    carro1.matricula = "?";
    carro1.ano = 1999;
    carro1.proprietario = "Alguém1";

    Carro carro2;
    carro2.marca = "Ferrari";
    carro2.modelo = "???";
    carro2.versao = "??";
    carro2.matricula = "?";
    carro2.ano = 2005;
    carro2.proprietario = "Alguém2";

    Carro carro3;
    carro3.marca = "Tesla";
    carro3.modelo = "???";
    carro3.versao = "??";
    carro3.matricula = "?";
    carro3.ano = 2022;
    carro3.proprietario = "Alguém3";

    Carro carro4;
    carro4.marca = "Porche";
    carro4.modelo = "???";
    carro4.versao = "??";
    carro4.matricula = "?";
    carro4.ano = 2000;
    carro4.proprietario = "Alguém4";

    int MediaAnos = (carro1.ano + carro2.ano + carro3.ano + carro4.ano)/4.0;
    int MediaIdade = 2024 - MediaAnos;

    cout << "\nA media de anos dos carros e: " << MediaAnos << endl;
    cout << "\nA media da idade dos carros e: " << MediaIdade << endl;

    return 0;
}
