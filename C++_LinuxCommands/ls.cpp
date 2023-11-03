// Flushing files
#include <iostream>
#include <fstream> // std::ofstream
#include <string>

std::string linha, registra;

int main()
{
    system("clear");
    system("ls -lh /var/lib/plocate/plocate.db > dat");

    std::fstream outfile; // fstream - leitura e escrita
    outfile.open("dat", std::ios::in);

    if (outfile.is_open())
    {
        std::cout<<"Texto no arquivo: ";
        // outfile.open("dat", std::ios::in);
        while (!outfile.eof())
        {
            getline(outfile, linha);
            if (linha!="")
                registra=linha;
            std::cout << "tamanho = " << linha.length() << '\n';
            std::cout << linha << '\n';

        }
/*             std::string::reverse_iterator rit = registra.rbegin();
            std::cout<<"Texto invertido: ";
            while (rit != registra.rend())
            {
                std::cout << *rit;
                ++rit;
            } */

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