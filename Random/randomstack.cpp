/* Autor:Walber Mota
 Linguagem: C++
 Criado em 09/05/2023
 Objetivo: Simula o lançamento de dois dados (aleatoriamente).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    srand(time(NULL));
    std::cout << "Dado_1: " << rand() % 6 + 1 << "\n";
    std::cout << "Dado_2: " << rand() % 6 + 1 << "\n";
}