#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Turmas {
public:
    string nome;
private:
    string listaAlunos[26][2];
    string listaModulos[50];
    float notaMedia;

public:

    void colocaNotaMedia(float notaX) {
        this->notaMedia = notaX;
    }
    bool inserirAluno(string numeroAluno, string nomeAluno) {
        // em que posição coloco o aluno
        for (int x=0; x<26; x++) {
            if (this->listaAlunos[x][0]=="") {
                    this->listaAlunos[x][0] = numeroAluno;
                    this->listaAlunos[x][1] = nomeAluno;
                    return true;
            }
        }
        return false;
    }
    string listagemNumeroAlunos(){
        string aux = "";
        for (int i=0; i<26; i++) {
            if (this -> listaAlunos[i][0] != "") {
                    aux += this-> listaAlunos[i][0];
                    aux += "\n";
            }
        }
        return aux;
    }
    void imprimeNumeroAlunos() {
        cout << this->numeroAlunos();
    }
    private:
    int numeroAlunos() {
        int contador = 0;
        for (int x=0; x<26; x++) {
            if (this->listaAlunos[x][0]!="") {
                contador++;
            }
        }
        return contador;
    }
};

int main() {

    Turmas turma1P;

    turma1P.nome = "Turma 1P 2023/2024";
    turma1P.colocaNotaMedia(0.0);
    turma1P.inserirAluno("14466", "Leonardo Fernandes");

    cout << "numero de alunos: ";
    turma1P.imprimeNumeroAlunos ();

    cout << endl;

    //cout << "alunos: ";
    cout << turma1P.listagemNumeroAlunos();

    return 0;
}
