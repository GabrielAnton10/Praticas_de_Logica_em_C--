#include <iostream>
#include <string>
using namespace std;

int main(){
    //Calculo de notas

    /**float Nota01, Nota02, Nota03, Nota04, Nota_Final;
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

    cout << "A sua nota final:" << Nota_Final;**/

    // Calculo de nota com condição 

    /**float Nota01, Nota02, Nota03, Nota04, Nota_Final;
    string Nome;

    cout << "Digite o seu Nome:";
        cin >> Nome;
    cout << "Digite a sua Primeira nota:";
        cin >> Nota01;
    cout << "Digite a sua Segunda nota:";
        cin >> Nota02;
    cout << "Digite a sua Terceira nota:";
        cin >> Nota03;
    cout << "Digite a sua Quarta nota:";
        cin >> Nota04;
    Nota_Final = (Nota01 + Nota02 + Nota03 + Nota04)/4;

    if(Nota_Final >= 7){
        cout << "Aprovado" << Nota_Final;

    }else{
        cout << "reprovado" << Nota_Final;

    }**/

    //Celsius to Farenheit

    float Celsius, Farenheit;

    /**cout << "Informe a temperatura em C°:";
        cin >> Celsius;
    Farenheit = (Celsius * 1.8)+32;
    cout << "O valor de f° é:" << Farenheit;**/

    cout << "Informe a temperatura em F°:";
        cin >> Farenheit;
    Celsius = (Farenheit - 32)/1.8;
    cout << "O valor de c° é:" << Celsius;

    
    return 0;
}