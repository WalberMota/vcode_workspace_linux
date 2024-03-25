/*
O compilador aplica conversões implícitas
quando os tipos são diferentes em uma expressão

As conversões são sempre feitas a partir do menor para
o maior tipo neste caso int é transformado em double
antes da expressão é avaliado. A menos que estejamos fazendo uma tarefa
*/

#include <iostream>

int main(int argc, char const *argv[])
{

    double preco{45.65};
    int unidades{10};

    double total = preco * unidades;

    std::cout << "o preço por unidade é :" << preco << '\n';
    std::cout << "unidade adquidas      :" << unidades << "\n\n";
    std::cout << "Total da aquisição     :" << total << '\n'
              << std::endl;

/*
a operação de atribuição causará uma conversão estreita implícita.
y é convertido em int antes da atribuição
*/

    int x;
    double y{45.44};
    x=y;
    std::cout <<"x = " << x <<std::endl;
    
    return 0;
}
