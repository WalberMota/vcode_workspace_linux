#include<iostream>

int main(int argc, char const *argv[])
{
    int num_aleatorio = std::rand();
    std::cout << "numero aleatório = "<<num_aleatorio<<std::endl; 

    num_aleatorio=std::rand();
    std::cout << "numero aleatório = "<<num_aleatorio<<std::endl; 

    std::cout << "RAND_MAX = " << RAND_MAX << std::endl;

    return 0;
}
