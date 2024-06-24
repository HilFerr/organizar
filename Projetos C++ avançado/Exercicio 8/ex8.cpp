#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int numRegistos = 26;
int numRegistosExistentes = 0;
bool leuFicheiro = false;

void readfile(char * localficheiro, string col1[numRegistos], int col2[numRegistos], string col3[numRegistos]) {

    char aux = ';';
    string myText;
    string txtFinal = "";
    bool comeca = false;
    int comecarVar = 1, posicaoArray=0;
    string idadeAux;
    //string col1[26], col2[26], col3[26];

    ifstream MyReadFile(localficheiro);

   while (getline (MyReadFile, myText)) {
        comecarVar = 1;
        idadeAux = "";
        if (myText == "<READ>") comeca = true;
        if (myText == "</READ>") comeca = false;

        if (comeca && myText!="<READ>") {
            for (int i=0; i< myText.length(); i++) {
                if (myText[i] == ';') {
                        comecarVar++;
                    } else {
                        if (comecarVar == 1) {
                            col1[posicaoArray] = col1[posicaoArray] + myText[i];
                        } else if (comecarVar == 2) {
                            idadeAux = idadeAux + myText[i];
                            col2[posicaoArray] = col2[posicaoArray] + myText[i];
                        } else if (comecarVar == 3) {
                            col3[posicaoArray] = col3[posicaoArray] + myText[i];
                        }
                    }
                }
                col2[posicaoArray] = stoi(idadeAux);
                //cout << "O " << col1[posicaoArray] << " tem " << col2[posicaoArray] << " anos e mora em " << col3[posicaoArray] << endl;
                posicaoArray ++; // dizer que passa para a proxima posicao do array
                //txtFinal = txtFinal + myText + "\n";
            }
    }
     MyReadFile.close();
     numRegistosExistentes = posicaoArray;
     leuFicheiro = true;
}

void writefile(char * localficheiro, string col1[numRegistos], int col2[numRegistos], string col3[numRegistos]) {

    string txtTotal = "";

    ofstream MyFile(localficheiro);

    txtTotal = txtTotal + "<READ>\n";

    for (int i=0; i<numRegistosExistentes; i++) {
        txtTotal += col1[i];
        txtTotal += ";";
        txtTotal += to_string(col2[i]);
        txtTotal += ";";
        txtTotal += col3[i];
        txtTotal += "\n";
    }

    txtTotal = txtTotal + "</READ>\n";

    MyFile << txtTotal;

    MyFile.close();
}

void mostraDados(string col[numRegistos]) {
    for (int i=0; i<numRegistosExistentes; i++) {
        cout << "#" << i << " - " << col[i] << "\n";
    }
}

void mostraDadosInteiros(int col[numRegistos]) {
    for (int i=0; i<numRegistos; i++) {
        cout << col[i] << "\n";
    }
}

void popularDadosInteiros(int col[numRegistos]) {
    for (int i=0; i<numRegistos; i++) {
        col[i]=0;
    }
}

void mostraRegistos(string nomes[numRegistos], int idades[numRegistos], string localidades[numRegistos]) {
    for (int i=0; i<numRegistosExistentes; i++) {
        cout << "#" << i << " - ";
        cout << nomes[i];
        cout << " | ";
        cout << to_string(idades[i]) << " anos ";
        cout << " | ";
        cout << localidades[i];
        cout << "\n";
    }
}

int mostraMenuPrincipal() {
    int opx = 0;
    system ("cls");
    cout << "**** LEITURA / ESCRITA DE FICHEIROS **** \n\n";
    cout << "1 - Ler Dados do ficheiro\n";
    if (leuFicheiro) {
        cout << "2 - Gravar Dados do Ficheiro\n";
        cout << "3 - Mostra Nomes Lidos\n";
        cout << "4 - Mostra Localidades Lidos\n";
        cout << "5 - Mostra Idades Lidos\n";
        cout << "6 - Mostra Registos da BD\n";
        cout << "11 - Inserir Registos da BD\n";
        cout << "12 - Alterar Registos da BD\n";
        cout << "13 - Apagar Registos da BD\n";
    }
    cout << "0 - Sair do Programa\n";
    cout << "O que pretende fazer? ";
    cin >> opx;

    return opx;
}

void inserirRegistos(string nomes[numRegistos], int idades[numRegistos], string localidades[numRegistos]) {

    string nome, localidade;
    int idade;
    cout << "Vai inserir um registo\n\n";
    cout << "Diga o nome do novo registo: ";
    cin >> nome;
    cout << "Diga a idade do novo registo: ";
    cin >> idade;
    cout << "Diga a localidade do novo registo: ";
    cin >> localidade;
    nomes[numRegistosExistentes] = nome;
    idades[numRegistosExistentes] = idade;
    localidades[numRegistosExistentes] = localidade;
    numRegistosExistentes = numRegistosExistentes + 1;
}

void alterarRegistos(string nomes[numRegistos], int idades[numRegistos], string localidades[numRegistos]) {

}

void apagarRegistos(string nomes[numRegistos], int idades[numRegistos], string localidades[numRegistos]) {

    int numero, op;
    cout << "Vai apagar um registo\n\n";
    cout << "Diga o numero do registo que deseja eliminar: ";
    cin >> numero;
    if (numero >= 0 && numero < numRegistosExistentes){

        cout << "tem a certeza que quer eliminar o seguinte registo:\n";
        cout << nomes[numero] << "," << idades[numero] << "," << localidades[numero ];
        cout << "Resposta (1 - SIM / 0 - NAO):";
        cin >> op;
        if (op == 1) {

            for (int i = numero; i < (numRegistosExistentes - 1); i++){
            nomes[i]= nomes[i + 1];
            idades[i]= idades[i + 1];
            localidades[i]= localidades[i + 1];
            }
            numRegistosExistentes = numRegistosExistentes - 1;
        }


    } else {
        cout << "Nao temos nenhum registo com esse numero\n Continuar(1-Sim):";
        cin >> op;
    }
}

int main () {

    string nomes[numRegistos], localidades[numRegistos];
    int idades[numRegistos];
    int op = 0, aux;

    //cout << idades[0] << endl;

    //cout << "Idade #1 " << stoi(idades[0]) << endl;
    //cout << "Idade #1 + 1 = " << (stoi(idades[0]) + 1) << endl;

    //mostraDados(nomes);
    //mostraDadosInteiros(idades);
    //mostraDados(localidades);

    do {
        op = mostraMenuPrincipal();

        switch (op) {
        case 1:
            popularDadosInteiros(idades);
            readfile("RodrigoAz.txt", nomes, idades, localidades);
            break;
        case 2:
            writefile("RodrigoAz.txt", nomes, idades, localidades);
            break;
        case 3:
            mostraDados(nomes);
            cout << "Continuar ? (1 - Sim)";
            cin >> aux;
            break;
        case 4:
            mostraDados(localidades);
            cout << "Continuar ? (1 - Sim)";
            cin >> aux;
            break;
        case 5:
            mostraDadosInteiros(idades);
            cout << "Continuar ? (1 - Sim)";
            cin >> aux;
            break;
        case 6:
            mostraRegistos(nomes, idades, localidades);
            cout << "Continuar ? (1 - Sim)";
            cin >> aux;
            break;

        case 11:
            inserirRegistos(nomes, idades, localidades);

            break;

        case 12:
            alterarRegistos(nomes, idades, localidades);

            break;

        case 13:
            apagarRegistos(nomes, idades, localidades);

            break;

        default:
            break;
        }
    } while (op != 0);

    return 0;
}
