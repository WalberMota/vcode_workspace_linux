#include <iostream>

class Retangulo
{
public:
    // construtor
    Retangulo(); //construtor sem parametros
    Retangulo(int w, int l);//construtor com dois parametros

    void SetWidth(int width);
    void SetLength(int length);

    int getArea()
    {
        return width * length;
    }

private:
    int width;
    int length;
};

main()
{

    return 0;
}
