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

int main() {
	graduacao::Aluno a(100,"João");

	float n[2]={18.0,8.5};

	a.setNotas(n);

	std::cout << "Aluno: " << a.getNome() << "\nMédia das notas: " << a.calculaMedia()<< '\n';

	return 0;
}
