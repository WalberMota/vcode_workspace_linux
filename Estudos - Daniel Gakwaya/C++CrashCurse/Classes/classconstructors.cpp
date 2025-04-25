#include <iostream>

class Retangulo
{
public:
    // construtor
    Retangulo() // construtor sem parâmetros
    {
        std::cout << "camada de construtor de classe sem parâmetros" << std::endl;
    }
    Retangulo(int w, int l) // construtor com dois parâmetros
    {
        std::cout << "chamada de construtor de classe com dois parâmetros" << std::endl;
        m_width = w;
        m_length = l;
    }

    void SetWidth(int width)
    {
        m_width = width;
    }
    void SetLength(int length)
    {
        m_length = length;
    }

    int getArea()
    {
        return m_width * m_length;
    }

private:
    int m_width;
    int m_length;
};

main()
{
    Retangulo r;
    return 0;
}
