#include <vector>
#include <iostream>
/*
    este exrciocio mostra o loop por intervalo e exibe
    somente os numero que são múltiplos de 3.
*/
void print_multiplos_de_3();

int main(int argc, char const *argv[])
{
    print_multiplos_de_3();
    std::cout<<"\nEste números são múltiplos de 3" <<std::endl;
    return 0;
}

void print_multiplos_de_3(){
    std::vector<int> numbers {1,21,4,5,7,3,9,18,5,17,15};
    for (int numero:numbers){
        if (numero%3==0) {
            std::cout << numero <<" ";
        }
    }
}