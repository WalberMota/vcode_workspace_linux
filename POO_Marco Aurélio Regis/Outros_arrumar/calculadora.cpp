//exercicio com criação de constructor

#include <iostream>

class Calculadora
{

private:
    double res;

public:
    Calculadora()
    {
        res = 0.0;
    }

    void setRes(double numero)
    {
        res = numero;
    }

    double soma(double num)
    {
        res += num;
        return res;
    }
    double subtrai(double num)
    {
        res -= num;
        return res;
    }

    double multiplica(double num)
    {
        res *= num;
        return res;
    }
    double divide(double num)
    {
        res /= num;
        return res;
    }
};

int main()
{

    Calculadora calc;
    calc.setRes(10.75);
    std::cout << "soma= " << calc.soma(3.5) << '\n';

    calc.setRes(10.75);    
    std::cout << "subtrai= " << calc.subtrai(3.5) << '\n';

    calc.setRes(10.75);
    std::cout << "multiplica = " << calc.multiplica(3.5) << '\n';

    calc.setRes(10.75);
    std::cout << "divide = " << calc.divide(3.5) << '\n';

    return 0;
}
