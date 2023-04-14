#include <iostream>
int opc;
float valor;

float celsiusfahr()
{
    float temp = (valor * 1.8) + 32;
    std::cout <<"resultado = "<< temp << " °F\n";
    return 0;
}

float fahrcelsius()
{
    float temp = (valor - 32) / 1.8;
    std::cout << "resultado = "<< temp << " °C\n";
    return 0;
}
float fahrkelvin()
{
    float temp =(((valor-32)*5)/9)+273.15;
    std::cout << "resultado = "<< temp << " K\n";
    return 0;
}
float kelvinFahr()
{
    float temp =((valor-273.15)*1.8)+32;
    std::cout << "resultado = "<< temp << " °F\n";
    return 0;
}
int main()
{
    std::cout << "Conversor de Escalas de Temperatura\n\n";
    std::cout << "1 - Celsius para Fahrenheit" << std::endl;
    std::cout << "2 - Celsius para Kelvin" << std::endl;
    std::cout << "3 - Fahrenheit para Celsius" << std::endl;
    std::cout << "4 - Fahrenheit para Kelvin" << std::endl;
    std::cout << "5 - Kelvin para Celsius" << std::endl;
    std::cout << "6 - Kelvin para Fahrenheit" << std::endl;
    std::cout << "Escolha uma opção: ";
    std::cin >> opc;
    
    if (opc == 1)//Celsius para Fahrenheit
    {
        std::cout << "Digite a temperatura em Celsius: ";
        std::cin >> valor;
        celsiusfahr();
    }
    if (opc == 2)//Celsius para Kelvin
    {
        std::cout << "Digite a temperatura em Celsius: ";
        std::cin >>valor;
        std::cout << "resultado = "<<(valor+273.15)<< " K\n";
    }

    if (opc == 3) //Fahrenheit para Celsius
    {
        std::cout << "Digite a temperatura em Fahrenheit: ";
        std::cin >>valor;
        fahrcelsius();
    }
    if (opc == 4) // Fahrenheit para kelvin
    {
        std::cout << "Digite a temperatura em Fahrenheit: ";
        std::cin >>valor;
        fahrkelvin();
    }    
    if (opc == 5) //Kelvin para Celsius
    {
        std::cout << "Digite a temperatura em Kelvin: ";
        std::cin >>valor;
        std::cout << "resultado = "<<(valor-273.15)<< " °C\n";
    }
    if (opc == 6) //Kelvin para Fahrenheit
    {
        std::cout << "Digite a temperatura em Kelvin: ";
        std::cin >>valor;
        kelvinFahr();
    }
}