#include <iostream>

class Retangulo
{
public:
    // construtor
    Retangulo();
    Retangulo(int w, int l);

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
