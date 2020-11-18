#ifndef ExibirLabitinto_h
#define Labirinto_h

#include "Constantes.h"

#include <iostream>
#include <string>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void criarLabirintoPossivel(char labirinto[LARGURA][ALTURA])
{
	for (int i = 0; i < LARGURA; i++)
	{
		for (int j = 0; j < ALTURA; j++)
		{
			labirinto[i][j] = CAMINHO;
		}
	}
	labirinto[0][1] = PAREDE;
	labirinto[1][1] = PAREDE;
	labirinto[2][1] = PAREDE;
	labirinto[3][1] = PAREDE;
	labirinto[0][2] = QUEIJO;
}

void criarLabirintoImpossivel(char labirinto[LARGURA][ALTURA])
{
	for (int i = 0; i < LARGURA; i++)
	{
		for (int j = 0; j < ALTURA; j++)
		{
			labirinto[i][j] = CAMINHO;
		}
	}
	labirinto[0][1] = PAREDE;
	labirinto[0][3] = PAREDE;
	labirinto[1][2] = PAREDE;
	labirinto[3][2] = PAREDE;
	labirinto[0][2] = QUEIJO;
}

void exibirLabirinto(char labirinto[LARGURA][ALTURA], int posX, int posY)
{
	for (int i = 0; i < LARGURA; i++)
	{
		for (int j = 0; j < ALTURA; j++)
		{
			if (labirinto[i][j] == ENTRADA){
				labirinto[i][j] = ENTRADA;
				cout << labirinto[i][j] << "\t";
			}
			else if (labirinto[i][j] == RATO){
				labirinto[i][j] = VISITANDO;
				cout << labirinto[i][j] << "\t";
			}
			else if (i == posX && j == posY){
				labirinto[i][j] = RATO;
				cout << labirinto[i][j] << "\t";
			}
			else{
				cout << labirinto[i][j] << "\t";
			}
		}
		cout << endl;
	}
}

#endif