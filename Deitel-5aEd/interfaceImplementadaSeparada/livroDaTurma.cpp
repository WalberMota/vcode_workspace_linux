/* 
cada nome de função-membro nos cabeçalhos de função (linhas 13, 18, 25 e 21) é precedido pelo nome de
classe e por ::, que é conhecido como "operador de resolução de escopo binário". Isso ‘amarra’ cada
função-membro à definição de classe livroDaTurma (agora separada em ), que declara as funções-membro
 e membros de dados da classe. Sem "livroDaTurma::" precedendo cada nome de função, essas funções não
 seriam reconhecidas pelo compilador como funções-membro da classe livroDaTurma.
 */

#include <iostream>
#include "livroDaTurma.h"


livroDaTurma::livroDaTurma(string name)
    {
        setCourseName(name); // chama a função SET para inicializar courseName(nome do curso)
    }                        // fim do construtor livroDaTurma

    // função SETTER = configurar o nome do curso
    void livroDaTurma::setCourseName(string name)
    {
        courseName = name; // armazena o nome do curso no objeto curseName
    }                      // fim da função setCourseName

    // função GET
    string livroDaTurma::getCourseName()
    {
        return courseName; // retorna courseName do objeto
    }                      // fim da função getCourseName

    // exibe uma mensagem de boas-vindas para o usuário livroDaTurma
    void livroDaTurma::displayMessage()
    {
        // chama getCourseName para obter o courseName
        std::cout << "Bem-vindo ao livro de Classe do curso: " << getCourseName() << "!" << std::endl;
    } // fim da função displayMessage

