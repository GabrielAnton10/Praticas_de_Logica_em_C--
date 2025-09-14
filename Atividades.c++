//Lista de receitas
# include <iostream>
# include <string>
using namespace std;

int main(){
    int receitas;
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
    }
    return 0;
}