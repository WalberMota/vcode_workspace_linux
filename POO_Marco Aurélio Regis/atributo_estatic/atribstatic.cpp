/* Um atributo com o modificador STATIC tem o seu valor compartilhado por
    os objetos da classe, ou seja, só haverá uma cópia dele para todos os
    objetos da classe.
 */

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
 
    graduacao::Aluno a("João");
    graduacao::Aluno a2("Careca");

    std::cout << "código aluno a: " << a.getCodigo() << '\n';
    std::cout << "código aluno a2:" << a2.getCodigo() << '\n';

 

    return 0;
}
