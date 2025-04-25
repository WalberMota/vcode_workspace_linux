#include <iostream>

class Retangulo
{
public:
    // construtor
    Retangulo(){}; //construtor sem parametros
    Retangulo(int w, int l);//construtor com dois parametros

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
