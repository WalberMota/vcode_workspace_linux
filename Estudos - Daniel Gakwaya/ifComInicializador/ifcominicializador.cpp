#include <iostream>

int main(int argc, char const *argv[])
{
    int speed {1};
    bool go {false};

    if (go) {

        std::cout << "Velocidade: " << speed << std::endl;


        if (speed > 5){   
            std::cout << "Diminua !" <<std::endl;
        }else{
            std::cout << "Tudo certo !" << std::endl;
        }
    }else{
        std::cout << "Velocidade: " << speed << std::endl;        
        std::cout << "Pare !" << std::endl;
    }
    std::cout << "Fora do bloco, velocidade: " << speed << std::endl;

    return 0;
}
