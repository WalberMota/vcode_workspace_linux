#include <iostream>

int main(int argc, char const *argv[])
{
    size_t i{7};
    std::cout << "i = " << i <<"(" << sizeof(i) << " bytes)";
    size_t h{43};
    std::cout <<"\nh = " << h <<"(" << sizeof(h) << " bytes)";

    //uso de size_t em for loop
    std::cout <<'\n';
    for (size_t i{0};i<5;i++)
    {
        std::cout << "Eu gosto de c++\n";

    }

    return 0;
}
