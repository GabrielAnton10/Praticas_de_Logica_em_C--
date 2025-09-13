//Atividade de switch
# include <iostream>
# include <string>
using namespace std;

int main(){
    int mes;

    cout << "Digite um numero do mes:";
    cin >> (mes);

    switch (mes)
    {
    case 1:
        cout << "Janeiro";
        break;
    case 2:
        cout << "Fevereiro";
    break;
    case 3:
        cout << "Marco";
    break;
    default:
    cout << "numero invalido";
        break;
    }
    return 0;
}