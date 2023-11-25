//============================================================================
// Name        : UniversidadePrj.cpp
// Author      : 
// Version     :
// Copyright   :
// Description : 
//============================================================================

#include <iostream>
#include <string>
#include "aluno.h"
#include "professor.h"
using namespace std;
using namespace graduacao;

int main() {

	Aluno *a1 = new Aluno(100, "Jo�o"); //O objeto a1 é armazenado na área de HEAP em mem�ria.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2(200, "Maria"); //O objeto a2 é armazenado na área de PILHA (STACK) em mem�ria.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	//Utilizando construtor de cópia para criar uma cópia do objeto a2.
	Aluno x = a2;

	cout << x.getCodigo() << " ";
	cout << x.getNome() << endl;

	//Chamada ao destrutor da classe para desalocar o objeto em memória
	delete a1;

	//Calula m�dia notas de Maria
	float notas_maria[2] = {10.0, 8.5};
	a2.setNotas(notas_maria);

	cout << "M�dia das notas de Maria � " << a2.calculaMedia() << endl;

	return 0;
}
