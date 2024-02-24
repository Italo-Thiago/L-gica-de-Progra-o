// terceiro.cpp - erros de semântica
# include <iostream>
using namespace std;

int main()
{
	int dias;    // declara uma variável inteira
	cout << " Número de Dias: ";
	cin >> dias; // lê um valor para a variável
	
	int horas = dias * 24;
	cout << dias << " dias tem " << horas << " horas." << endl;

	system("pausa");
	return 0;
}
