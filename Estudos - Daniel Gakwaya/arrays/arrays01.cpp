#include<iostream>

int main(int argc, char const *argv[])
{
    int scores[10]; //array estocando 10 inteiros
    scores[0]= 20;
    scores[1]= 21;
    scores[2]= 22;

    for (size_t i = 0; i < 10; i++)
        std::cout << "scores[" << i << "]: " << scores[i] << '\n';
    
    return 0;
}
