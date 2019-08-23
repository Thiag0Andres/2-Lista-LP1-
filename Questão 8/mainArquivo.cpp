#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    std::string nome;
    int periodo;
    long long int matricula;

    ifstream input("teste.txt", ios::in);
    if(!input.is_open()){
        cout << "Falha ao abrir o arquivo" << endl;
        return -1;
    }

    ofstream output("teste_bkp.txt", ios::out);
    if(!output.is_open()){
        cout << "Falha ao abrir o arquivo" << endl;
        return -2;
    }

    while(!input.eof()){
        getline(input, nome);
        cout << nome << endl;

        input >> periodo;
        cout << periodo << endl;

        input >> matricula;
        cout << matricula << endl;
    }

    output << nome << endl;
    output << periodo << endl;
    output << matricula << endl;

    input.close();
    output.close();

    return 0;
}
