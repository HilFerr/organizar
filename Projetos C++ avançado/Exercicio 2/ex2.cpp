#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class MyClass {
    private:
        int myYear;

    public:
        int myNum;
        string myString;



    public:
        void myMethod() {
            cout << "Hello World!" << endl;
        }

        int mySum(int num1, int num2) {
            return num1 + num2;
        }

};

int main() {

    MyClass myObj;

    //myObj.myYear = 2025;
    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    myObj.myMethod();
    cout << endl << myObj.mySum(2, 3);

    return 0;
}
