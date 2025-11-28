#include <iostream>
#include <vector>
#include <list>

// Número de vértices en nuestro grafo (ciudades A, B, C, D)
const int V = 4;

// Función para añadir una arista (conexión)
void agregarArista(std::vector<std::list<int>>& grafo, int u, int v) {
    // Para un grafo NO dirigido, la conexión es mutua:
    grafo[u].push_back(v); // De u a v
    grafo[v].push_back(u); // De v a u
}

int main() {
    // Creamos un vector donde cada elemento (índice 0, 1, 2, 3) 
    // representa un vértice. El tipo list<int> almacena sus vecinos.
    // Índice 0 = Ciudad A
    // Índice 1 = Ciudad B
    // ...
    std::vector<std::list<int>> listaAdyacencia(V);

    // Conexiones de un mapa simple:
    agregarArista(listaAdyacencia, 0, 1); // A <-> B
    agregarArista(listaAdyacencia, 0, 2); // A <-> C
    agregarArista(listaAdyacencia, 1, 2); // B <-> C
    agregarArista(listaAdyacencia, 2, 3); // C <-> D

    std::cout << "Representación del Grafo con Lista de Adyacencia:\n";

    for (int i = 0; i < V; ++i) {
        std::cout << "Vertice " << i << " (Vecinos): ";
        for (int vecino : listaAdyacencia[i]) {
            std::cout << vecino << " -> ";
        }
        std::cout << "NULL\n";
    }

    return 0;
}