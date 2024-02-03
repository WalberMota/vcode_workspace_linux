#include <iostream>


int main(){

	char caracter1 {'a'};
    char caracter2 {'r'};
    char caracter3 {'r'};
    char caracter4 {'o'};
    char caracter5 {'w'};
    
    std::cout << caracter1 << '\n';
    std::cout << caracter2 << '\n';
    std::cout << caracter3 << '\n';
    std::cout << caracter4 << '\n';
    std::cout << caracter5 << '\n';

    //Um byte na memoria = 2^8 = 256 diferentes valores (0~255)
    std::cout << '\n';
    
    char value1 = 65; // aqui foi colocado o código ASCII para 'A'
    char value2 = 'B'; // aqui foi colocado o próprio caracter 'B'

    std::cout << "value : " << value1 << '\n'; // A
    std::cout << "value(int) : " << static_cast<int>(value1) << '\n'; 
    
    std::cout << "value : " << value2 << '\n'; // B
    std::cout << "value(int) : " << static_cast<int>(value2) << '\n'; 

    return 0;
}