#include<iostream>

int main(int argc, char const *argv[])
{
    int scores[10]; //array estocando 10 inteiros
    for (size_t i = 0; i < 10; i++)
        std::cout << "scores[" << i << "]: " << scores[i] << '\n';
    
    return 0;
}
