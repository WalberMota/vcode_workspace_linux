// Figura 3.10: fig03_10.cpp
// Incluindo a classe livroDaTurma a partir do arquivo livroDaTurma.h para uso em main.

#include <iostream>
#include "livroDaTurma.h" // inclui a definição de classe livroDaTurma

// a função main inicia a execução do programa
int main()
{

    // cria dois objetos livroTurma
    livroDaTurma livroTurma1("CS101 Introduction to C++ Programming");
    livroDaTurma livroTurma2("CS102 Data Structures in C++");

    // exibe valor inicial de courseName para cada GradeBook
    std::cout << "livro Turma-01 criado para o curso: " << livroTurma1.getCourseName() << std::endl;
    livroTurma1.displayMessage();

    std::cout << "\nlivro Turma-02 criado para o curso: " << livroTurma2.getCourseName() << std::endl;
    livroTurma2.displayMessage();
    

    return 0; // indica terminação bem-sucedida

} // fim de main