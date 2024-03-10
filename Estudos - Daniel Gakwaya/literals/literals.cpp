// c++14 em diante
#include <iostream>

int main(int argc, char const *argv[])
{
    signed long long int signed_long_long_int{1234ll};
    unsigned int prize{1'500'00'0u};
    std::cout << "The prize is : " << prize << std::endl;

    std::cout << " signed_long_long_int : " << signed_long_long_int << std::endl;

    return 0;
}
