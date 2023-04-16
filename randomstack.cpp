#include <iostream>
#include <cstdlib>
#include <ctime>
//using namespace std;

int main() {
    srand(time(NULL));
    std::cout << "Dado_1: " << rand() % 6 + 1 << "\n";
    std::cout << "Dado_2: " << rand() % 6 + 1 << "\n";
}