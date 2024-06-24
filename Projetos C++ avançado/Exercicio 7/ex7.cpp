#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    // Create and open a text file
    ofstream MyFile("RodrigoAz.txt");

    // Write to the file
    MyFile << "<READ>\nRodrigo Azevedo;15;Ribeirao\n</READ>";

    // Close the file
    MyFile.close();
}
