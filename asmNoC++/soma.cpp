#include<iostream>


int main(int argc, char const *argv[])
{
int src = 5;
int dst;   

asm ("mov %1, %0\n\t"
    "add $1, %0"
    : "=r" (dst) 
    : "r" (src));

    std::cout << "dst: "<<dst<<std::endl;

//printf("%d\n", dst);
    return 0;
}


