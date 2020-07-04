#ifndef  BATALHA_H_INCLUDE
#define  BATALHA_H_INCLUDE
#include <iostream>
using namespace std;

class batalha {
private:
	int bonus;
	int valor_ataque;
	int valor_defesa;
	int level_treinador;
	int c1;
	int c_bonus;
public:
	void setBonus(int b);
	int getBonus();
	void setValor_golpe(int vd,int va,int lvl);
	
};

void batalha::setBonus(int b) {
	bonus = b;
}

int batalha::getBonus() { 

	return  bonus;
}

void batalha::setValor_golpe(int vd, int va, int lvl) {
	int valor_ataque = va;
	int valor_defesa = vd;
	int level_treinador = lvl;
	int c1 = (valor_ataque + valor_defesa) / 2;
	int c_bonus = ((valor_ataque + valor_defesa) / 2) + bonus;


	if (level_treinador % 2 != 0) {

		cout << c1;
	}

	else if (level_treinador % 2 == 0) {

		cout << c_bonus;
	}

}



#endif // ! BATALHA_H_INCLUDE
#pragma once
