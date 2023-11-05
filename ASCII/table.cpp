#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout << "DEC CHAR      DEC CHAR      DEC CHAR" << '\n';
    for (int i=33;i<64;i++)
    {
        std::cout <<" "<< i << "   " << char(i) <<"        " << i+32 << "   "\
        << char(i+32)<<"        " <<i+64 << "   " << char(i+64) << '\n';

    }
    return 0;
}
