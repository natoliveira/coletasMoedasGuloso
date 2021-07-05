#include <iostream>
#include <vector>
using namespace std;

int num_moedas(vector<int>& moedas, int troco)
{
    int qte_moedas = 0;
    int tam_moedas = moedas.size();

    //o for vai do final do vetor para o início pegando o maior valor da moeda -1, caso o resultado não for maior ou igual
    for(int i = tam_moedas - 1; i >= 0; i--)
    {
        int aux_moedas = troco / moedas[i];
        troco -= aux_moedas * moedas[i];
        qte_moedas += aux_moedas;
    }

    return qte_moedas;
}

int main(int argc, char *argv[])
{
    vector<int> moedas;
    int troco;
    //quantidade de troco que o algoritmo da
    troco = 26;
    //vetor com os valores
    moedas.push_back(1);
    moedas.push_back(2);
    moedas.push_back(5);
    moedas.push_back(10);
    moedas.push_back(20);

    // retorno do número de moedas do troco retornado
    cout<<"Numero de moedas: "<<num_moedas(moedas, troco);


    return 0;
}