#include <iostream>

int numbers[]{1, 2, 3, 5, 10, 12, 13, 16, 15, 92};

int collection_size{std::size(numbers)};
bool sorted;

int main(int argc, char const *argv[])
{
    // imprime o array
    std::cout << "numbers[";
    for (auto i : numbers)
    {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;

    // verificação de ordem crescente
    for (int i = 0; i < collection_size-1; i++)
    {
        if (numbers[i] < numbers[i + 1])
        {
            sorted = true; // em ordem crescente
        }
            else
        {
            sorted = false; // fora de ordem crescente
            break;
        }
        // return sorted;
    }

    if (sorted == true)
        std::cout << "array é classificado em ordem de incremento." << std::endl;
    if(sorted == false)
        std::cout << "array não é classificado em ordem de incremento" << std::endl;

    return 0;
}

