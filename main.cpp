#include "Labirinto.h"
#include "Rato.h"
#include "MovimentarRato.h"
#include "EscolherSolucao.h"
#include "CriarEntradaAleatoria.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

int main()
{
    char labirinto[LARGURA][ALTURA];

    if (escolherSolucao()){
        criarLabirintoPossivel(labirinto);
    }
    else{
        criarLabirintoImpossivel(labirinto);
    }

    Entrada entrada = criarEntradaAleatoria(entrada, labirinto);
    labirinto[entrada.posX][entrada.posY] = ENTRADA;

    Rato rato;
    rato.posX = entrada.posX;
    rato.posY = entrada.posY;

    if (procurarQueijo(labirinto, rato.posX, rato.posY, 0, rato.temQueijo)){
        cout << "ENCONTROU O QUEIJO!";
    }
    else{
        cout << "NAO FOI POSSIVEL CHEGAR AO QUEIJO :(";
    }
}