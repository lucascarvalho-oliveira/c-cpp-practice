/******************************************************************************
Programa: Busca Binária em Vetor Ordenado
Autor: Lucas Carvalho
Data: 13/10/2025
Descrição: Este programa realiza a busca binária em um vetor de inteiros
  pré-definido e ordenado. O usuário informa um número, e o programa verifica
  se esse número está presente na lista, retornando uma mensagem apropriada..
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  vector<int> lista = {10, 15, 20, 25, 30, 35, 40, 45, 50};
  int item;
  
  cin >> item;
  
  int baixo = 0;
  int alto = lista.size() - 1;
  int achado = 0;
  
  while(baixo <= alto){
    int meio = (baixo + alto) / 2;
    int chute = lista[meio];
    
    if(chute == item){
      achado++;
      break;
    }else if(chute < item){
      baixo = meio + 1;
    }else{
      alto = meio - 1;
    }
  }
  
  if(achado != 0){
    cout << "Numero encontrado" << endl;
  }else{
    cout << "Numero não encontrado" << endl;
  }

  return 0;
}