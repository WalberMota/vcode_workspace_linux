
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

inicio:

	float trocado = 0;
	float moeda50 = 0;
	float moeda25 = 0;
	float moeda10 = 0;
	float moeda5 = 0;
	float moeda1 = 0;

	cout << "Quanto você quer trocar em moedas?"
		 << "(Use o formato 0.00)\n"
		 << "ou digite 0(zero) para Sair\n";
	cin >> trocado;
	if (trocado == 0)
	{
		goto sair;
	}
	trocado+=0.0005;
	trocado = (trocado) * 100;

	while (trocado >= 50)
	{
		trocado = trocado - 50.00;
		moeda50++;
	}
	while (trocado >= 25)
	{
		trocado = trocado - 25.00;
		moeda25++;
	}
	while (trocado >= 10)
	{
		trocado = trocado - 10.00;
		moeda10++;
	}
	while (trocado >= 5)
	{
		trocado = trocado - 5.00;
		moeda5++;
	}
	while (trocado >= 1)
	{
		trocado = trocado - 1.00;
		moeda1++;
	}

	cout << "\n"
		 << endl;
	cout << "moedas de 50 centavos :" << moeda50 << endl;
	cout << "moedas de 25 centavos :" << moeda25 << endl;
	cout << "moedas de 10 centavos :" << moeda10 << endl;
	cout << "moedas de 5 centavos  :" << moeda5 << endl;
	cout << "moedas de 1 centavo   :" << moeda1 << endl;
	//cout << "trocado :" << trocado << endl;

	do // faz um pause no linux
	{
		cout << '\n';
			// << "Press the Enter key to continue.";
	} while (cin.get() != '\n');

	goto inicio;
sair:
	return 0;
}
