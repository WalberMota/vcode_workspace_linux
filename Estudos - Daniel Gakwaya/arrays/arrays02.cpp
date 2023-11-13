#include<iostream>

int main(int argc, char const *argv[])
{
    int scores[10]; //array estocando 10 inteiros
    // scores[22]=300; //gravando fora dos limites do array - causa o erro "warning: array index 22 is\
                         past the end of the array (that has type 'int[10]') [-Warray-bounds]"
    std::cout << "\nEscrevendo dados num array com um loop: \n";

    //escrevendo os dados
    for (size_t i{0};i < 10;++i)
    {
        scores[i] = i*3;
    }

    for (size_t i = 0; i < 10; i++)
        std::cout << "scores[" << i << "]: " << scores[i] << '\n';
    
    return 0;
}
