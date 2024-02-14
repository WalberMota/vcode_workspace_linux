#include <iostream>
#include <string>
#include"aluno.h"

//entry point ***********************
int main(int argc, char const *argv[])
{
 
    Aluno a(1010, "João");

    std::cout << "Nome   aluno a = " << a.getNome();
    std::cout << "\nCódigo aluno a = " << a.getCodigo();

	float n[2]{10.0, 8.5};
	a.setNotas(n);
	std::cout << "\nA Média das notas é " << a.calculaMedia() << '\n';
    return 0;
}

