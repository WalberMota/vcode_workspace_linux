#include <filesystem>
#include <iostream>
#include <string>

int main() {
    std::string priparte="ffmpeg -i ";
    std::string restopart=" -vn -ar 44100 -ac 2 -ab 96k -f mp3";
    // Define o caminho da pasta que você deseja ler
    std::filesystem::path dir("/home/preacher/Music/meus_etheralT/teste");

    // Itera sobre os arquivos na pasta
    for (const auto& entry : std::filesystem::directory_iterator(dir)) {
        // Verifica se o item é um arquivo
        if (entry.is_regular_file()) {
            // Lê o nome do arquivo e remove acentos
            std::string fileName = entry.path().filename().string();
            //fileName.erase(std::remove_if(fileName.begin(), fileName.end(), ::ispunct), fileName.end());
            std::cout << fileName << std::endl;

            system('ffmpeg -i <arquivo_fonte> -vn -ar 44100 -ac 2 -ab 96k -f mp3 <arquivo.saida>.mp3');

        }
    }

    return 0;
}