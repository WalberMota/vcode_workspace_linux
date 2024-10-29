#include <iostream>
#include <string>

float calculavolume(float raio1,float raio2,float raio3);

    std::string r1, r2, r3;
    float raio1,raio2,raio3;
    float volume;

int main(int argc, char const *argv[])
{


    //std::cin.ignore();
    std::cout << "Digite o primeiro raio: ";
    getline(std::cin, r1);

    std::cout << "Digite o segundo raio: ";
    getline(std::cin, r2);

    std::cout << "Digite o terceiro raio: ";
    getline(std::cin, r3);

    std::cout << "r1=" << r1 << " r2=" << r2 << " r3=" << r3 << std::endl;

    float raio1=std::stof (r1);
    float raio2=std::stof(r2);
    float raio3=std::stof(r3);
    std::cout<< "Volume da elipse:"<< calculavolume(raio1,raio2,raio3)<<"\n";
    
    return 0;
}


float calculavolume(float raio1, float raio2, float raio3)
{
    volume=(4*3.14*raio1*raio2*raio3)/24;
    return volume;

}
