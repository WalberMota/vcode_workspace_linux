#include <iostream>

int main(int argc, char const *argv[])
{
    int bolsa_de_valores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 /*
    for (int valor : bolsa_de_valores)
    {

        std::cout << "Valor na bolsa: " << valor << std::endl;
    }
*/

    //especificando acoleção dentro do for
    for (int valor :{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}){
        std::cout << "Valor na bolsa: " << valor << std::endl;
    }


    return 0;
}
