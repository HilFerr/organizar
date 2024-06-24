#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

int dinheiroporhora, horaspormes, dinheiropormes;

cout << "Quanto voce ganha por hora? ";
cin >> dinheiroporhora;
cout << "Quantas horas trabalha por mes? ";
cin >> horaspormes;

dinheiropormes = horaspormes * dinheiroporhora;

cout << "\nVoce ganha " << dinheiropormes << " por mes, e ganha aproximadamente " << dinheiropormes * 12 << " por ano.\n";

}
