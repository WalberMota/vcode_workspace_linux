#include <filesystem>
#include <iostream>
#include <string>

int main() {
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
        }
    }

    return 0;
}