#include <iostream>

class Retangulo
{
public:
    // construtor
    Retangulo() //construtor sem parametros
    {
        std::cout <<"camada de construtor de classe sem parâmetros"<<std::endl;
    }
    Retangulo(int w, int l)//construtor com dois parametros
    {
        m_width=w;
        m_length=l;
    }

    void SetWidth(int width);
    void SetLength(int length);

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

    return 0;
}
