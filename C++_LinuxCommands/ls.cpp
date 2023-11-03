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
            std::cout << "tamanho = " << linha.length() << "\n\n";
            std::cout << linha << '\n';

        }

        outfile.close();
    }
    else
    {
        std::cout << "ERRO: arquivo não foi aberto ou não existe" << '\n';
    }

    return 0;
}