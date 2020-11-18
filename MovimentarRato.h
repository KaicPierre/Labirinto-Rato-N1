#ifndef MovimentarRato_h
#define MovimentarRato_h

#include <iostream>
using namespace std;

bool procurarQueijo(char labirinto[LARGURA][ALTURA], int posX, int posY, int deOndeVeio, bool &temQueijo)
{
    if (posX < 0 || posY < 0 || posX >= LARGURA || posY >= ALTURA){
        return false;
    }
    else if (labirinto[posX][posY] == QUEIJO){

        temQueijo = true;
        cout << "ENCONTROU" << endl;
        exibirLabirinto(labirinto, posX, posY);
        cout << endl;
        Sleep(1500);
        return true;
    }
    else if (labirinto[posX][posY] == PAREDE || labirinto[posX][posY] == VISITANDO){
        return false;
    }
    else{

        cout << "PROCURANDO..." << endl;
        exibirLabirinto(labirinto, posX, posY);
        cout << endl;
        Sleep(1500);

        if (deOndeVeio != DIREITA && procurarQueijo(labirinto, posX, posY + 1, ESQUERDA, temQueijo)){

            cout << "RETORNANDO..." << endl;
            exibirLabirinto(labirinto, posX, posY);
            cout << endl;
            Sleep(1500);
            return true;
        }
        else if (deOndeVeio != BAIXO && procurarQueijo(labirinto, posX + 1, posY, CIMA, temQueijo)){

            cout << "RETORNANDO..." << endl;
            exibirLabirinto(labirinto, posX, posY);
            cout << endl;
            Sleep(1500);
            return true;
        }
        else if (deOndeVeio != ESQUERDA && procurarQueijo(labirinto, posX, posY - 1, DIREITA, temQueijo)){

            cout << "RETORNANDO..." << endl;
            exibirLabirinto(labirinto, posX, posY);
            cout << endl;
            Sleep(1500);
            return true;
        }
        else if (deOndeVeio != CIMA && procurarQueijo(labirinto, posX - 1, posY, BAIXO, temQueijo)){

            cout << "RETORNANDO..." << endl;
            exibirLabirinto(labirinto, posX, posY);
            cout << endl;
            Sleep(1500);
            return true;
        }
    }
    return false;
}

#endif