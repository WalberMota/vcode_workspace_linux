/* 
livroDaTurma.h
Aqui é Defininda a interface de uma classe com os protótipos de função.
A interface de uma classe descreve quais serviços os clientes de uma classe
podem utilizar e como solicitar esses serviços, mas não como a classe executa os serviços
 */

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