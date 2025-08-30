#include <iostream>
#include <string>
using namespace std;

int main(){
    //Calculo de notas

    float Nota01, Nota02, Nota03, Nota04, Nota_Final;
    string Nome;

    cout << "Digite o seu nome:";
        cin >> Nome;
    cout << "Digite a sua Primeira nota:";
        cin >> Nota01;
    cout << "Digite a sua Segunda nota:";
        cin >> Nota02;
    cout << "Digite a sua terceira nota:";
        cin >> Nota03;
    cout << "Digite o sua Quarta nota:";
        cin >> Nota04;
    Nota_Final = (Nota01 + Nota02 + Nota03 + Nota04)/4;

    cout << "A sua nota final:" << Nota_Final;
    


    return 0;
}