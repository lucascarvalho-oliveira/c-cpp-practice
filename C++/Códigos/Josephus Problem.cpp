/******************************************************************************
Programa: Josephus Problem
Autor: Lucas Carvalho
Data: 13/10/2025
Descrição: Este programa resolve o problema de Josephus. Para cada caso de teste,
  são informados N (número de pessoas) e K (passo da eliminação). O programa
  determina a última pessoa restante após eliminar cada K-ésima pessoa em um círculo.
*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int NC, N, K;
  cin >> NC;
  
  for(int contador = 1; contador <= NC; contador++){
  
    cin >> N >> K;
  
    vector<int> pessoas;
  
    for(int i = 1; i <= N; i++){
      pessoas.push_back(i);
    }
  
    int pos = 0;
    
    while(pessoas.size() > 1){
      pos = (pos + K - 1) % pessoas.size();
      pessoas.erase(pessoas.begin() + pos);
    }
  
    cout << "Case " << contador << ": " << pessoas[0] << endl;
  }
  
  return 0;
}