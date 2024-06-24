#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int num;
string op;
string english, morse, aux;

string Morse[37] = {"/", ".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--",
                   "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
string Alphabet[37] = {" ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J",
                    "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T",
                    "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4",
                    "5", "6", "7", "8", "9", "0"};

void Menu() {
    cout << "MORSE CODE TRANSLATOR" << endl << endl;
    cout << "1 - Encode" << endl;
    cout << "2 - Decode" << endl;
    cout << "3 - Close program" << endl;
    cout << "R.: ";
    cin >> op;
}

void EnglishMenu() {
    cout << "English" << endl << endl;
    cout << "Your text: ";
    cin >> english;
}

void MorseMenu() {
    cout << "Morse" << endl << endl;
    cout << "(Write spaces as '/')" << endl;
    cout << "Your text: ";
    cin >> morse;
}

int main() {
    while (op != "1" && op != "2") {
        system("cls");
        Menu();

        system("cls");
        if (op != "1" && op != "2" && op != "3") {
            cout << "Invalid character!" << endl << endl;
            cout << "Press [ENTER] to continue...";
            getch();
        }
    }

    if (op == "1") {
        num = 1;
    } else if (op == "2") {
        num = 2;
    } else if (op == "0") {
        num = 3;
    }

    switch (num) {
    case 1:
            cout << "GOT 1!" << endl << endl;
        break;
    case 2:
            cout << "GOT 2!" << endl << endl;

        break;
    case 3:
            cout << "GOT 3!" << endl << endl;
        break;
    }
    return 0;
}
