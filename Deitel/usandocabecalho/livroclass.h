// livroclasse.h
// Definição de classe livroDaTurma em um arquivo main separado.
#include <iostream>

#include <string> // a classe GradeBook utiliza a classe de string padrão C++
using std::string;
// definição da classe GradeBook
class livroDaTurma
{
public:
    // o construtor
    livroDaTurma(string name)
    {
        setCourseName(name); // chama a função SET para inicializar courseName
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
        std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
    } // fim da função displayMessage
private:
    string courseName; // nome do curso para esse livroDaTurma
};                     // fim da classe livroDaTurma