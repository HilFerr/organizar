#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

string conv_array_string(string meuarray[], int inicio, int tamanho) {
    //return "QUALQUER COISA";
    if (inicio < tamanho) {
        return meuarray[inicio] + conv_array_string(meuarray, inicio+1, tamanho);
    } else {
        return "";
    }
}

int main() {
    string meuarray[11] = {"L","U","I","S"," ","S","A","N","T","O","S"};
    int tamanho = 11;
    cout << conv_array_string(meuarray, 0, tamanho);
        string conv_array_string(string meuarray[], int inicio, int fim);
    return 0;
}
