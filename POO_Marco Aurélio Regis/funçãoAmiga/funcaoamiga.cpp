/*  namespace - palavra reservada da linguagem c++ utilizada para prevenir conflitos
    entre nome de classe, variáveis e funções em grnades projetos:
    Possibilita agrupar classes, objetos e funções sob um nome 
    sintaxe:
    namespace <nome_namespace>
    {
        //código das declarações
    }
*/
#include <iostream>
#include <string>
#include"aluno.h"

//elimina a necessidade de repetir dentro do código o operador resolução de escopo
//using namespace graduacao;

//entry point ***********************
int main(int argc, char const *argv[])
{
 
    graduacao::Aluno a(1010, "João");

    std::cout << "Nome   aluno a = " << a.getNome();
    std::cout << "\nCódigo aluno a = " << a.getCodigo();

	float n[2]{10.0, 8.5};
	a.setNotas(n);
	std::cout << "\nA Média das notas é " << a.calculaMedia() << '\n';

    professor p;

    p.alteraNotaAlunoGraduacao(a,3.0,4.0);

    std::cout << a.calculaMedia << '\n';

    return 0;
}
