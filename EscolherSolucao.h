#ifndef EscolherSolucao_h
#define EscolherSolucao_h

#include <iostream>
using namespace std;

bool escolherSolucao()
{

    bool escolhaSolucao;
    cout << "=====================" << endl;
    cout << "Escolha uma das Solucoes:" << endl;
    cout << "Solucao Impossivel: 0" << endl;
    cout << "Solucao Possivel: 1" << endl;
    cout << "=====================" << endl;
    cout << "SOLUCAO: ";
    cin >> escolhaSolucao;

    if (escolhaSolucao)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#endif