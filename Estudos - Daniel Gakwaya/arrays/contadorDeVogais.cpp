#include <iostream>

char message[]{'H', 'e', 'l', 'l', 'o'};
unsigned int size = sizeof(message);
unsigned int acumulador{}; // Initialized to zero

int main(int argc, char const *argv[])
{

    for (int x = 0; x < size; x++)
    {
        if (message[x] == 'a' || message[x] == 'A' || message[x] == 'e' || message[x] == 'E' || message[x] == 'i' || message[x] == 'I' || message[x] == 'o' || message[x] == 'O' || message[x] == 'u' || message[x] == 'U')
        {
            acumulador++;
        }
    }
    std::cout << message << " tem " << acumulador << " vogais: " << std::endl;

    return 0;
}
