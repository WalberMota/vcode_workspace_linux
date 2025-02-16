#include <iostream>

int main(int argc, char const *argv[])
{
    int turma[]{10, 12, 15, 11, 18, 17};
    int sum;
    
    /*
    Para que a matriz do array não seja modificada pode usar:
    const int turma[]{10,12,15,11,18,17}
    */

    // ler os valores do array
    for (auto valor : turma)
    {
        std::cout << "valor: " << valor << std::endl;
    }

    //soma os valores do arry e guarda em uma variável qualquer

    for(int elemento:turma){
        sum+=elemento;
        std::cout << std::endl;
        std::cout <<"Resultado da soma dos elementos da matriz : "<< sum<<std::endl;
        }
    return 0;
}
