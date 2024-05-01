#include <filesystem>
#include <iostream>
#include <string>



void cortanome();

int main()
{
    std::string priparte = "ffmpeg -i ";
    std::string restopart = " -vn -ar 44100 -ac 2 -ab 96k -f mp3";
    std::string final;
    // Define o caminho da pasta que você deseja ler
    std::filesystem::path dir("/home/preacher/Music/meus_etheralT/teste");

    // Itera sobre os arquivos na pasta
    for (const auto &entry : std::filesystem::directory_iterator(dir))
    {
        // Verifica se o item é um arquivo
        if (entry.is_regular_file())
        {
            // Lê o nome do arquivo.
            if ()
            std::string fileName = entry.path().filename().string();
            // fileName.erase(remove_if(fileName.begin(), fileName.end(), ::isspace), fileName.end());
    char z;
    int i = 0;
    std::string nome=fileName;
    char str[]+to_string(nomwe);
    while (str[i])
    {
        z = str[i];
        if (isspace(z))
            z = '\n';
        putchar(z);
        i++;
    }


            std::cout << fileName << std::endl;
            final = priparte + fileName + restopart + fileName + ".mp3";
            char *c = final.data();
            std::cout << c << std::endl;
            system(c);
        }
    }

    return 0;
};

void cortanome()
{
    char c;
    int i = 0;
    char str[] = fileName;
    while (str[i])
    {
        c = str[i];
        if (isspace(c))
            c = '\n';
        putchar(c);
        i++;
    }
};
