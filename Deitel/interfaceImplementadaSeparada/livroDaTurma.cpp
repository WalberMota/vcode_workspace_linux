#include "livroDaTurma.h"


livroDaTurma(string name)
    {
        setCourseName(name); // chama a função SET para inicializar courseName(nome do curso)
    }                        // fim do construtor livroDaTurma

    // função SETTER = configurar o nome do curso
    void setCourseName(string name)
    {
        courseName = name; // armazena o nome do curso no objeto curseName
    }                      // fim da função setCourseName

    // função GET
    string getCourseName()
    {
        return courseName; // retorna courseName do objeto
    }                      // fim da função getCourseName

    // exibe uma mensagem de boas-vindas para o usuário GradeBook
    void displayMessage()
    {
        // chama getCourseName para obter o courseName
        std::cout << "Bem-vindo ao livro de Classe do curso: " << getCourseName() << "!" << std::endl;
    } // fim da função displayMessage

