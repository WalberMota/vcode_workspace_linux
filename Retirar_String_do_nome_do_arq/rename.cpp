#include <iostream>
#include <string>
#include <filesystem> // C++17 ou superior

namespace fs = std::filesystem;

int main() {
    std::string caminhoCompleto;
    std::string stringParaRemover;

    std::cout << "Digite o nome do arquivo(caminho completo se necessario):";
    std::getline(std::cin, caminhoCompleto);

    std::cout << "Digite a string que deseja remover do nome: ";
    std::cin >> stringParaRemover;

    try {
        fs::path p(caminhoCompleto);

        if (fs::exists(p) && fs::is_regular_file(p)) {
            std::string nomeOriginal = p.filename().string();
            std::string novoNome = nomeOriginal;

            // Encontrar e remover a string
            size_t pos = novoNome.find(stringParaRemover);
            if (pos != std::string::npos) {
                novoNome.erase(pos, stringParaRemover.length());
            } else {
                std::cout << "String nao encontrada no nome do arquivo." << std::endl;
                return 1;
            }

            // Criar o novo caminho
            fs::path novoCaminho = p;
            novoCaminho.replace_filename(novoNome);

            // Renomear
            fs::rename(p, novoCaminho);
            std::cout << "Arquivo renomeado para: " << novoCaminho.filename() << std::endl;
        } else {
            std::cout << "Arquivo nao encontrado ou nao e um arquivo valido." << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
