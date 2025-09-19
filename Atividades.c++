//Lista de receitas
# include <iostream>
# include <string>
using namespace std;

int main(){
    /**int receitas;
    cout << "______________________________________ \n";
    cout << "___________Lista de receitas__________\n";
    cout << "1->PIZZA \n";
    cout << "2->LASANHA \n";
    cout << "Esconha uma receita: \n";
    cin >> (receitas);
    cout << "______________________________________ \n";

    switch (receitas)
    {
    case 1:
        cout <<"Queijo \n";
        cout <<"Molho de tomate \n";
        cout <<"Massa de pizza \n";
        cout <<"Frango Desfiado\n";
        cout <<"Cebola";
        break;
    case 2:
        cout <<"Massa para Lasanha \n";
        cout <<"Fatias de Queijo \n";
        cout <<"Carne Moida \n";
        break;
    default:
        cout <<"A Receita nao esta na lista! ";
        break;
    }**/
   
    //Calculadora simplis

    int numero1, numero2, soma;
    int operacao;

    cout << "________________________________________________";
    cout << "______________CALCULADORA SIMPLIS_______________ \n ";
    cout << "1-> SOMA \n 2-> SUBTRACAO \n 3-> MULTIBLICACAO \n 4-> DIVISAO \n";
    cout << "Escolha uma operacao:";
    cin >> operacao;

    switch (operacao) {

    case 1:
        cout << "Digite o primeiro numero:";
            cin >> numero1;
        cout << "Didite o outro numero:";
            cin >> numero2;
                soma = numero1 + numero2;
        cout << "O valor e:" << soma << "\n";
        break;
    case 2:
        cout << "Digite o primeiro numero:";
            cin >> numero1;
        cout << "Didite o outro numero:";
            cin >> numero2;
                soma = numero1 - numero2;
        cout << "O valor e:" << soma << "\n";
        break;
    case 3:
        cout << "Digite o primeiro numero:";
            cin >> numero1;
        cout << "Didite o outro numero:";
            cin >> numero2;
                soma = numero1 * numero2;
        cout << "O valor e:" << soma  << "\n";
        break;
    case 4:
        cout << "Digite o primeiro numero:";
            cin >> numero1;
        cout << "Didite o outro numero:";
            cin >> numero2;
                soma = numero1 / numero2;
        cout << "O valor e:" << soma << "\n";
        break;
    default:
        cout << "Voce digitou um numero invalido!";
        break;
    }
   
    




    return 0;
}