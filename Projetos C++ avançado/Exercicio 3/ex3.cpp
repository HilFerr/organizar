#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Matematica {

    private:
        int num1, num2;


    public:
        void setNum1(int x) {
            this->num1 = x;
        }
        int getNum1() {
            return this->num1;
        }

    public:
        int somar(int numX, int numY) {
            return (numX + numY);
        }

        int subtrair(int numX, int numY) {
            return (numX - numY);
        }

        int multiplicar(int numX, int numY) {
            return (numX * numY);
        }

        float dividir(int numX, int numY) {
            return ((float) numX / (float) numY);
        }
};

int main() {

    Matematica obj1;

    oobj1.setNum(5);
    cout << obj1.getNum1() << endl;

    cout << obj1.somar(2, 5) << endl;
    cout << obj1.subtrair(2, 5) << endl;
    cout << obj1.multiplicar(2, 5) << endl;
    cout << obj1.dividir(2, 5) << endl;

    return 0;
}
