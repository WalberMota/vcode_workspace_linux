#include <iostream>
#include <string>

float calculavolume(float diametro1,float diametro2,float diametro3);
    std::string d1, d2, d3;
    //float diametro1,diametro2,diâmetro3;
    float volume;

int main(int argc, char const *argv[])
{

    //std::cin.ignore();
    std::cout << "Digite o primeiro diâmetro: ";
    getline(std::cin, d1);

    std::cout << "Digite o segundo diâmetro: ";
    getline(std::cin, d2);

    std::cout << "Digite o terceiro diâmetro: ";
    getline(std::cin, d3);

    //std::cout << "r1=" << r1 << " r2=" << r2 << " r3=" << r3 << std::endl;

    float diametro1=std::stof(d1);
    float diametro2=std::stof(d2);
    float diametro3=std::stof(d3);
    
    std::cout<< "Volume da elipse:"<< calculavolume(diametro1,diametro2,diametro3)<<"\n";

    return 0;
}


float calculavolume(float diametro1,float diametro2,float diametro3)
{
    float volume=(4*3.14*diametro1*diametro2*diametro3)/24;
    return (volume);

}

