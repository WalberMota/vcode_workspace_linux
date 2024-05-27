#include<iostream>

void menu();
std::string idade;

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}

void menu()
{
    std::cout << "###############################\n";
    std::cout << "#      Digite a sua idade      #\n";
    std::cout << "#                              #\n";
    std::cout << "#    São elegíveis as idades   #\n";
    std::cout << "# entre 21 e 39 anos(inclusive)#\n";
    std::cout << "#                              #\n";
    std::cout << "###############################\n";
    std::cout << "\nDigite a sua idade : ";
    getline (std::cin,idade);

}