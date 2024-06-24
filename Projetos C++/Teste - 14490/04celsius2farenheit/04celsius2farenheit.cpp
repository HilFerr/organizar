#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

   int F, C;

   cout << "Escreva uma temperatura em graus Celsius: ";
   cin >> C;

    F = (5 / (C+32) * 9);

   cout << "Essa temperatura em graus Farenheit e: " << F << " (se der 0 e porque iria dar um numero real, nao funciona com numeros reais)" << endl;

}

