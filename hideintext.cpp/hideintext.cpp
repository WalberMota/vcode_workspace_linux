// Flushing files
#include <iostream>
#include <fstream> // std::ofstream
#include <string>

std::string pw = "walber"; // k.\\}m=%iMn~eBc^oXxJ3 -----   R$E#W@q!

int main()
{
    std::string linha;
    std::fstream outfile; // fstream - leitura e escrita
    // std::ofstream outfile("test.txt");4
    outfile.open("test.txt", std::ios::in);
    if (outfile.is_open())
    {

        while (!outfile.eof())
        {
            getline(outfile, linha);
            std::cout << linha << '\n';
        }
        outfile.close();
    }
    else
    {
        std::cout << "ERRO: arquivo não foi aberto ou não existe" << '\n';
    }

    /*
        std::string::reverse_iterator rit = pw.rbegin();
        while (rit != pw.rend())
        {
            outfile << *rit;
            std::cout << *rit;
            ++rit;
        }

        std::ofstream outfile("test.txt");

        for (int n = 0; n < 100; ++n)
        {
            outfile << n << " ";
            // outfile.flush();
        }
    */

    return 0;
}