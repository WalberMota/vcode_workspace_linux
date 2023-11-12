#include <iostream>

int main(int argc, char const *argv[])
{
    const unsigned int LIMITE{10};
    unsigned int i{11};

    do
    {
        std::cout << "[" << i << "]: Eu amo c++" << '\n';
        ++i;
    } while (i < LIMITE);

    return 0;
}
