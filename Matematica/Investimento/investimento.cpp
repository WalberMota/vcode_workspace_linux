#include<iostream>

int main(int argc, char const *argv[])
{
    float inicial{10000.00};
    int i=0;
    
    while (inicial <20000.00)
    {
        std::cout << inicial <<" - ano " << i <<'\n';
        inicial=(inicial*1.0417);
        i++;
    }
    


    
    //std::cout << "o valor de 10000 com redimento de 5% a.a. dobrará de valor em " << i << " anos\n";
    //std::cout << "valor final = " << inicial;
    return 0;
}
