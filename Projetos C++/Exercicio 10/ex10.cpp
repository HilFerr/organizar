#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string arrayletras[3][10] = {
        { "A", "B", "C", "D", "B", "C", "D", "B", "C", "D" },
        { "A", "B", "C", "D", "B", "C", "D", "B", "C", "D" },
        { "E", "F", "G", "H", "B", "C", "D", "B", "C", "D" }
    };

    for (int x = 0; x < 3; x++) {
        for (int i = 0; i < 10; i++) {
            cout << "array[" << x << "][" << i << "] = ";
            cout << arrayletras[x][i] << endl;
        }
    }

     return 0;
}
