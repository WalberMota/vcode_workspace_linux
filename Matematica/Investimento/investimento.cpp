#include<iostream>

int main(int argc, char const *argv[])
{
    float inicial=10000;
    int i=0;
    do
    {
        inicial=inicial+(inicial*1.05);
        i++;
    } while (inicial<20000);
    
    return 0;
}
