#include<iostream>

int main(int argc, char const *argv[])
{
    int scores[10]; //array estocando 10 inteiros
    scores[0]= 20;
    scores[1]= 21;
    scores[2]= 22;

    // scores[22]=300; //gravando fora dos limites do array - causa o erro "warning: array index 22 is past the end of the array (that has type 'int[10]') [-Warray-bounds]"

    for (size_t i = 0; i < 10; i++)
        std::cout << "scores[" << i << "]: " << scores[i] << '\n';
    
    return 0;
}
