#include <iostream>

int main(int argc, char const *argv[])
{
    
    bool go {true};

    if (int speed {50};go) {

        std::cout << "Velocidade: " << speed << std::endl;


        if (speed > 50){   
            std::cout << "Diminua !" <<std::endl;
        }else{
            std::cout << "Tudo certo !" << std::endl;
        }
    }else{
        std::cout << "Velocidade: " << speed << std::endl;        
        std::cout << "Pare !" << std::endl;
    }
    //std::cout << "Fora do bloco, velocidade: " << speed << std::endl;

    return 0;
}
