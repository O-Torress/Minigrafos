#include <iostream>
#include <vector>
#include <tuple>

// Definimos un tipo para una arista ponderada: (Origen, Destino, Peso)
using AristaPonderada = std::tuple<int, int, int>;

int main() {
    // La lista de aristas es simplemente un vector de las tuplas
    std::vector<AristaPonderada> listaAristas;

    // Agregamos las aristas (Origen, Destino, Peso)
    listaAristas.emplace_back(0, 1, 5);  // (A, B, peso 5)
    listaAristas.emplace_back(0, 2, 8);  // (A, C, peso 8)
    listaAristas.emplace_back(1, 2, 3);  // (B, C, peso 3)
    listaAristas.emplace_back(2, 3, 10); // (C, D, peso 10)
    listaAristas.emplace_back(1, 3, 6);  // (B, D, peso 6)

    std::cout << "--- Lista de Aristas (Ponderada) ---\n";
    std::cout << "--- (Origen, Destino, Peso)--- \n";

    for (const auto& arista : listaAristas) {
        // Usamos std::get<índice> para acceder a los elementos de la tupla
        int u = std::get<0>(arista);
        int v = std::get<1>(arista);
        int peso = std::get<2>(arista);
        
        std::cout << "(" << u << ", " << v << ", " << peso << ")\n";
    }

    return 0;
}