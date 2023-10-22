#include<iostream>
#include<string>

class Aluno{

    int codigo;
    std::string nome;
    
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // o objeto criado é armazenado na HEAP
    Aluno a2;   //o objeto criado é armazenado na STACK (pilha)
    return 0;
}
