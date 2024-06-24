#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

   int F, C;

   cout << "Escreva uma temperatura em graus Farenheit: ";
   cin >> F;

    C = (5 * (F-32) / 9);

   cout << "Essa temperatura em graus Celsius e: " << C << " (se der 0 e porque iria dar um numero real, nao funciona com numeros reais)" << endl;

}
