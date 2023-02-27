#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Eletronica{
    public:

    float resistencia;
    float tensao;
    float corrente;

    float calcResistencia(float corrente, float tensao){
            this->resistencia = tensao / corrente;
            return this->resistencia;
    };
    float calcCorrente(float tensao, float resistencia){
        this->corrente = tensao / resistencia;
        return this->corrente;
    };
    float calcTensao(float corrente, float resistencia){
        this->tensao = corrente * resistencia;
        return this->tensao;
    };

};

int main(){
    setlocale(LC_ALL, "Portuguese");
    float corrente, tensao, resistencia;
    int opc;
    Eletronica *eletronica = new Eletronica();

    cout << "Bem-Vindo...";
    cout << "\nInsira uma das opções para realizar uma operação: ";
    cout << "\n1 - Calcular Tensão";
    cout << "\n2 - Calcular Corrente";
    cout << "\n3 - Calcular Resistência";

    cin >> opc;

    system("cls");
    switch (opc){
        case 1:
            cout << "Insira um valor de Corrente: ";
            cin >> corrente;
            cout << "\nAgora insira um valor de Tensão: ";
            printf("\n");
            cin >> tensao;
            printf("\nA Resistência será de: %.2f onms", eletronica->calcResistencia(corrente, tensao));

        case 2:
            cout << "Inisra um valor de Tensão: ";
            cin >> tensao;
            cout << "\nAgora insira um valor de Resistência: ";
            printf("\n");
            cin >> resistencia;
            printf("\nA Corrente será de: %.2f A", eletronica->calcCorrente(tensao, resistencia));
        case 3:
            cout << "Insira um valor de Corrente: ";
            cin >> corrente;
            cout << "\nAgora insira um valor de Resistência: ";
            printf("\n");
            cin >> resistencia;
            printf("A Tensão será de: %.2f V", eletronica->calcTensao(corrente, resistencia));
    };
    printf("\n");
    system("pause");




    return 0;
}
