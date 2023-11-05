#include<iostream>

int main(int argc, char const *argv[])
{
    for (int i=33;i<65;i++)
    {
        std::cout << i << " " << char(i) <<"   " << i+32 << " " << char(i+32) << '\n';

    }
    return 0;
}
