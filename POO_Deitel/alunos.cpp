#include<iostream>
using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;



class livroDaClasse//definição da classe GradeBook
{
	public:
		void displayMessage(string curso)  //cabeçalho da função
							   //as chaves delimitam o corpo da função
		{
			cout<<"Bem vindo ao Livro de Classe do Curso de "<<curso<<"\n";
		}
};

int main()
{
	string nomeDoCurso;
	livroDaClasse meuLivroDaClasse;
	
	cout<<"Por favor digite o nome do curso: "<<"\n";
	getline(cin,nomeDoCurso); //lê o nome do cuso com espaços em branco

	cout<<"\n";

	meuLivroDaClasse.displayMessage(nomeDoCurso);//parênteses vazios, essa função-membro não requer dados adicionais para realizar sua tarefa

	return 0;
}

