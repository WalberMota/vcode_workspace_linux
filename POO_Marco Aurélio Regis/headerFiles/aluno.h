#ifndef ALUNO_H_
#define ALUNO_H_

#include <iostream>
#include <string>
#include "professor.h"
using namespace std;

namespace posgraduacao {

	class Aluno {

	};
}
/***********************************************/

namespace graduacao {

	class Aluno {

	private:
		int codigo;
		string nome;

		float notas[2] = {0.0, 0.0};

	public:
		//Construtor default
		Aluno();
		//Construtor parametrizado
		Aluno(int codigo, string nome);
		//Construtor de cópia
		Aluno(const Aluno &a);
		//Destrutor da classe
		~Aluno();

		//GETTERS - accessor methods
		int getCodigo();
		string getNome();
		float *getNotas();

		//SETTERS - mutator methods
		void setCodigo(int codigo);
		void setNome(string nome);
		void setNotas(float notas[]);
		float calculaMedia();

		//Função amiga declarada na classe Professor
		friend void Professor::alteraNotaAlunoGraduacao(Aluno &a, float n1, float n2);
	};

}

#endif /* ALUNO_H_ */
