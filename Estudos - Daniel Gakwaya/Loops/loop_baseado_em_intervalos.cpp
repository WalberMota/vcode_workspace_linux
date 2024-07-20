#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    
/*  
    //usando uma array
    int bolsa_de_valores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int valor : bolsa_de_valores)
    {

        std::cout << "Valor na bolsa: " << valor << std::endl;
    }
*/
/*
    //especificando a coleção dentro do for
    for (int valor :{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}){
        std::cout << "Valor na bolsa: " << valor << std::endl;
    }
*/

    //compilador defino automaticamente o tipo de acordo com a coleção.
    //o iterator é executado independente da ordem dos elementos
    for (auto valor :{1.4, 5.66, 18.34, 4.04, 99.38, 125.4356}){
        std::cout << "Valor na bolsa: " << valor << std::endl;
    }    

    return 0;
}
