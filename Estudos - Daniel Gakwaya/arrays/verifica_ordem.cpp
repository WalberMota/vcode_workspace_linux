#include <iostream>

int numbers[]{1, 2, 4, 5, 8, 12, 13, 16, 71, 92};



int collection_size{std::size(numbers)};
bool sorted;

bool is_sorted(int *numbers[], unsigned int collection_size);

int main(int argc, char const *argv[])
{
    // imprime o array
    std::cout << "numbers[";
    for (auto i : numbers)
    {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;

    // função de verificação de ordem crescente
    /*     for (int i = 0; i < collection_size; i++)
        {
            if (numbers[i] < numbers[1 + 1])
                sorted = true; //em ordem crescente
            else
                sorted = false; //fora de ordem crescente
                break;
        } */
    is_sorted(numbers[], collection_size);

    if (sorted == true)
        std::cout << "array is sorted in incrementing order." << std::endl;
    else
        std::cout << "array is not sorted in incrementing order." << std::endl;
    return 0;
};

bool is_sorted(int *numbers[], unsigned int y)
{

    for (int i = 0; i < collection_size; i++)
    {
        if (numbers[i] < numbers[1 + 1])
            sorted = true; // em ordem crescente
        else
            sorted = false; // fora de ordem crescente
        break;
        return sorted;
    }

    return false;
}
