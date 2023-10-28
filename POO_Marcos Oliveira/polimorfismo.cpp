/*
 * Polimorfismo:
 *
 *
 * aqui é usado o mesmo nome (num) em uma mesma classe mesmo em funções diferentes
 * dentro dela ou até em classes diferentes por herança, como neste programa aqui.
 *
 *
 */

#include<iostream>

class Pessoa
{
	public:
		int num(){
			return 10;
		}

		int num(int num){
			return num;
		}

};

class Turma : public Pessoa
{
	public:
		int num(){
			return 50;
		}
		int num(int num){
			return num;
		}
}


int main()
{

	Pessoa p;
	Turma t;

	std::cout <<"num() de Pessoa é: " << p.num()<<'\n';
	std::cout <<"num(int num) de Pessoa é: " << p.num(256)<<'\n';
	std::cout <<"num() de Turma é: " << t.num()<<'\n';
	std::cout <<"num(int num) de Turma é: " << t.num(12562)<<'\n';

	return 0;
}

