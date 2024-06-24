#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

struct fAluno{
        int numeroAluno;
        string nomeAluno;
        int anosAluno;
};

struct fNota {
  string disciplina;
  string modulo;
  int notaModulo;
};

int main() {
    fAluno fichaAluno;
    fichaAluno.numeroAluno = 14490;
    fichaAluno.nomeAluno = "Rodrigo Azevedo";
    fichaAluno.anosAluno = 15;
    cout << "Aluno : " << fichaAluno.nomeAluno;
    cout << ", tem o numAluno : " << fichaAluno.numeroAluno;
    cout << " e tem " << fichaAluno.anosAluno << " anos." << endl;

    fAluno fichaAluno2;
    fichaAluno2.numeroAluno = 9441;
    fichaAluno2.nomeAluno = "Azevedo Rodrigo";
    fichaAluno2.anosAluno = 51;
    cout << "Aluno : " << fichaAluno2.nomeAluno;
    cout << ", tem o numAluno : " << fichaAluno2.numeroAluno;
    cout << " e tem " << fichaAluno2.anosAluno << " anos." << endl;

    fNota notaAlunoDisciplinal;
    notaAlunoDisciplinal.disciplina = "Programacao";
    notaAlunoDisciplinal.modulo = "C++ Iniciacao";
    notaAlunoDisciplinal.notaModulo = 0;

    return 0;
}
