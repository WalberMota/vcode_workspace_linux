// livroDaTurma.h
// Definição de classe livroDaTurma em um arquivo main separado.
#include <iostream>
#include <string> // a classe livoDaTurma utiliza a classe de string padrão C++
using std::string;

// definição da classe livroDaTurma
class livroDaTurma
{
public:
     livroDaTurma(string name);
     void setCourseName(string name);
     string getCourseName();
     void displayMessage();
 
private://a variável curseName está encapsulada, não poder ser acessada de fora dessa classe
    string courseName; // nome do curso para esse livroDaTurma

};// fim da classe livroDaTurma