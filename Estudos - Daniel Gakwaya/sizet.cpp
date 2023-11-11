#include <iostream>

int main(int argc, char const *argv[])
{
    size_t i{7};
    std::cout << "i = " << i <<"(" << sizeof(i) << " bytes)";
    size_t h{43};
    std::cout <<"\nh = " << h <<"(" << sizeof(h) << " bytes)";

}
