#include <iostream>
using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void calcularTransposta(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarPorFator(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
}

void somarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N, K;
    int matriz[MAX_M][MAX_N];
    int matrizTransposta[MAX_N][MAX_M];
    int matrizMultiplicada[MAX_M][MAX_N];
    int matrizAdicao[MAX_M][MAX_N];
    int matrizParaAdicao[MAX_M][MAX_N];

    cout << "Digite as dimensoes da matriz (M e N): ";
    cin >> M >> N;

    if (M > MAX_M || N > MAX_N) {
        cout << "Dimensoes da matriz excedem os limites permitidos." << endl;
        return 1;
    }

    lerMatriz(matriz, M, N);

    cout << "Digite o fator K para multiplicacao: ";
    cin >> K;

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz, M, N);

    calcularTransposta(matriz, matrizTransposta, M, N);
    cout << "Matriz transposta:" << endl;
    imprimirMatriz(matrizTransposta, N, M);

    multiplicarPorFator(matriz, matrizMultiplicada, M, N, K);
    cout << "Matriz multiplicada por " << K << ":" << endl;
    imprimirMatriz(matrizMultiplicada, M, N);

    cout << "Digite os elementos da segunda matriz para adicao:" << endl;
    lerMatriz(matrizParaAdicao, M, N);

    somarMatrizes(matriz, matrizParaAdicao, matrizAdicao, M, N);
    cout << "Resultado da adicao com a segunda matriz:" << endl;
    imprimirMatriz(matrizAdicao, M, N);

    return 0;
}
