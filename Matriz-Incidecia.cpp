#include <iostream>
#include <vector>

void imprimirMatrizIncidencia(const std::vector<std::vector<int>>& matriz, int V, int E) {
    std::cout << "  E0 E1 E2 E3 E4\n"; // Encabezado de aristas
    for (int i = 0; i < V; ++i) {
        std::cout << "V" << i << " ";
        for (int j = 0; j < E; ++j) {
            std::cout << matriz[i][j] << "  ";
        }
        std::cout << "\n";
    }
}

int main() {
    const int V = 4; // Número de Vértices
    const int E = 5; // Número de Aristas (E0 a E4)

    // Inicializamos la matriz V filas x E columnas, llena de 0
    std::vector<std::vector<int>> matrizIncidencia(V, std::vector<int>(E, 0));

    // Definimos las aristas (Columna E_j)
    // E0: (0, 1)
    matrizIncidencia[0][0] = 1;
    matrizIncidencia[1][0] = 1;
    
    // E1: (0, 2)
    matrizIncidencia[0][1] = 1;
    matrizIncidencia[2][1] = 1;

    // E2: (1, 2)
    matrizIncidencia[1][2] = 1;
    matrizIncidencia[2][2] = 1;

    // E3: (2, 3)
    matrizIncidencia[2][3] = 1;
    matrizIncidencia[3][3] = 1;

    // E4: (1, 3)
    matrizIncidencia[1][4] = 1;
    matrizIncidencia[3][4] = 1;

    std::cout << "--- Matriz de Incidencia ---\n";
    imprimirMatrizIncidencia(matrizIncidencia, V, E);
    
    return 0;
}