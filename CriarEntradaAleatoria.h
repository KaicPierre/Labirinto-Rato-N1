#ifndef CriarEntradaAleatoria_h
#define CriarEntradaAleatoria_h

#include <iostream>
#include <time.h>

#include "Constantes.h"

using namespace std;

struct Entrada
{
    int posX;
    int posY;
};

Entrada criarEntradaAleatoria(Entrada entrada, char labirinto[LARGURA][ALTURA])
{

    srand(time(NULL));
    entrada.posX = rand() % 5;
    entrada.posY = rand() % 5;

    while (labirinto[entrada.posX][entrada.posY] == PAREDE || labirinto[entrada.posX][entrada.posY] == QUEIJO)
    {
        entrada.posX = rand() % 5;
        entrada.posY = rand() % 5;
    }
    return entrada;
}

#endif