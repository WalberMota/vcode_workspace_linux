#include<iostream>
using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;



class livroDaClasse//definição da classe GradeBook
{
	private:
		string nomeDoCurso;

	public:
		void colocaNomeCurso(string nome) //o parametro 'nome' recebe o valor do argumento 'curso' na linha 40 - getline
		{
			nomeDoCurso = nome;
		}

		string mostraNomeCurso()
		{
			return nomeDoCurso;
		}

		void displayMessage() //esta função-membro chama a função-membro 'mostraNomeCurso' 
		//as chaves delimitam o corpo da função
		{
			cout<<"Bem vindo ao Livro de Classe do Curso de "<< mostraNomeCurso() <<"\n";
		}
};

int main()
{
	string curso;
	livroDaClasse meuLivroDaClasse;
	
	cout<<"Por favor digite o nome do curso: "<<"\n";
	getline(cin,curso); //lê o nome do curso com espaços em branco
	meuLivroDaClasse.colocaNomeCurso(curso);//aciona a função-membro com o valor da variável 'curso' como argumento

	cout<<"\n";

	meuLivroDaClasse.displayMessage();//parênteses vazios, essa função-membro não requer dados adicionais para realizar sua tarefa

	return 0;
}

