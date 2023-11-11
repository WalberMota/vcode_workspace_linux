#include<iostream>

int main(int argc, char const *argv[])
{
    const size_t LIMITE{3};
    size_t i{}; //declara o iterator
    while (i<LIMITE) // aquii ocorre o teste
    {
        std::cout << i << " : Eu amo c++ \n";
        ++i;//incrementa o iterator
    }
    
    return 0;
}
