
#include <iostream>

// Namespace para funções de matemática
namespace Matematica {
    int calcular(int a, int b) {
        return a + b; // Soma
    }
}

// Namespace para funções de física
namespace Fisica {
    int calcular(int forca, int area) {
        return forca / area; // Pressão
    }
}

int main() {
    // Para chamar a função, especificamos o "sobrenome" (namespace)
    int soma = Matematica::calcular(10, 5);      // Chama a versão da Matemática
    int pressao = Fisica::calcular(10, 5);        // Chama a versão da Física

    std::cout << "Resultado da Matemática: " << soma << std::endl;
    std::cout << "Resultado da Física: " << pressao << std::endl;

    return 0;
}