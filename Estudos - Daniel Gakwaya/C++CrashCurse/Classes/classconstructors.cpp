#include <iostream>


class Retangulo
{
public:
    // construtor
    Retangulo() // construtor sem parâmetros
    {
        std::cout << "chamada de construtor de classe sem parâmetros" << std::endl;
    }
    Retangulo(int w, int l) // construtor com dois parâmetros
    {
        std::cout << "chamada de construtor de classe com dois parâmetros" << std::endl;
        m_width = w;
        m_length = l;
    }
/*
    void SetWidth(int width)
    {
        m_width = width;
    }
    void SetLength(int length)
    {
        m_length = length;
    }
*/
    int getArea()
    {
        return m_width * m_length;
    }

private:
    int m_width;
    int m_length;
};


int main()
{
    Retangulo r1;
    std::cout << " - Criado retangulo 1 que não possui parâmetros" << std::endl;
    Retangulo r2(10, 20);
    std::cout << " - Calculando área do retangulo 2 (10,20): " << r2.getArea() << std::endl;
    return 0;
}

/*=========outros metodos de implementação ===============
class Retangulo
{
public:
    // construtor e prototipo de funções
    Retangulo();
    Retangulo(int w, int l);
    int getArea();

private:
    int m_width;
    int m_length;
};
//funções para definição
Retangulo::Retangulo() // construtor sem parâmetros
{
    std::cout << "chamada de construtor de classe sem parâmetros" << std::endl;
}
Retangulo::Retangulo(int w, int l) // construtor com dois parâmetros
{
    std::cout << "chamada de construtor de classe com dois parâmetros" << std::endl;
    m_width = w;
    m_length = l;
}
int Retangulo::getArea()
{
    return 0;
}
*/
