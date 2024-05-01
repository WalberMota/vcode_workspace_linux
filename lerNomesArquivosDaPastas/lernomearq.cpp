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
            std::string fileName = entry.path().filename().string();
            // fileName=fileName.erase(remove_if(fileName.begin(), fileName.end(), ::isspace), fileName.end());
            std::cout << '\n'
                      << fileName << std::endl;
            final = priparte + fileName + restopart + fileName + ".mp3";
            char *c = final.data();
            std::cout << c << std::endl;
            // system(c);
        }
    }

    return 0;
};

/* void cortanome()
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
}; */
