#include <iomanip>
#include <iostream>
#include <locale.h>
#include "batalha.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int d, a, lvl;
    int d2, a2, lvl2;


    batalha* j1 = new batalha();
    batalha* j2 = new batalha();

    int r;
    cout << "----------------------------------------" << endl;
    cout << "Sejam Bem-Vindo(s) a Batalha de PoKemons" << endl;
    cout << "----------------------------------------" << endl << endl;

    cout << "O jogo vai ter quantas rodadas?" << endl;
    cout << "Numero de rodadas: ";
    cin >> r;
    
    

    j1->setBonus(5);
    cout << "Bonus do jogador de numero 1: " << j1->getBonus() << endl;

    j2->setBonus(3);
    cout << "Bonus do jogador de numero 2: " << j2->getBonus() << endl << endl;

    for (int vl = 1; vl <= r; vl++) {
        

        cout << "Rodada " << vl << endl << endl;

        cout << "Jogador 1" << endl << endl;

        cout << "Insira o valor de defesa do seu Pokemon: ";
        cin >> d;

        cout << endl << endl;

        cout << "Insira o valor de ataque do seu Pokemon: ";
        cin >> a;

        cout << endl << endl;

        cout << "Insira o seu level treinador: ";
        cin >> lvl;

        cout << endl << endl;

        cout << "Jogador 2" << endl << endl;

        cout << "Insira o valor de defesa do seu Pokemon: ";
        cin >> d2;

        cout << endl << endl;

        cout << "Insira o valor de ataque do seu Pokemon: ";
        cin >> a2;

        cout << endl << endl;

        cout << "Insira o seu level treinador: ";
        cin >> lvl2;

        cout << endl << endl;

        cout << "Valor do Golpe do jogador um: ";
        j1->setValor_golpe(d,a,lvl);
            cout << endl << endl;


         cout << "Valor do Golpe do jogador dois: ";
         j2->setValor_golpe(d2,a2,lvl2);

         cout << endl << endl;

   }
     
}
    


