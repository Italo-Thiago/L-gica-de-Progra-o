// lerinfos.cpp - entrada e saída de dados
#include <iostream>
using namespace std;

int main() {
  int cenouras;

  cout << "Quantas cenouras você tem?" << endl;
  cin >> cenouras; // entrada de dados em C++

  cout << "Aqui estão mais duas. ";
  cenouras = cenouras + 2;

  // concatena a saída
  cout << "Agora você tem " << cenouras << " cenouras." << endl;

  return 0;
}
