#include <iostream>
#include <vector>

// Número de vértices
const int V = 4;

// Inicializamos la matriz de adyacencia (4x4 llena de 0)
int matrizAdyacencia[V][V] = {0}; 

// Función para añadir una arista (conexión)
void agregarAristaMatriz(int u, int v) {
    // Para un grafo NO dirigido, marcamos ambas posiciones
    matrizAdyacencia[u][v] = 1;
    matrizAdyacencia[v][u] = 1;
}

int main() {
    agregarAristaMatriz(0, 1); // A <-> B
    agregarAristaMatriz(0, 2); // A <-> C
    agregarAristaMatriz(1, 2); // B <-> C
    agregarAristaMatriz(2, 3); // C <-> D

    std::cout << "Representacion del Grafo con Matriz de Adyacencia:\n";

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            std::cout << matrizAdyacencia[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}