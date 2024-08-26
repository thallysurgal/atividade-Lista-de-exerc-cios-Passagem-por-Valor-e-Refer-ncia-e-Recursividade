#include <iostream>
using namespace std;

int somatorioRecursivo(int N) {
    if (N <= 0) {
        return -1;
    }
    if (N == 1) {
        return 1;
    }
    return N + somatorioRecursivo(N - 1);
}

int somatorioIterativo(int N) {
    if (N <= 0) {
        return -1;
    }
    int soma = 0;
    for (int i = 1; i <= N; ++i) {
        soma += i;
    }
    return soma;
}

int main() {
    int N;

    cout << "Digite um valor para N: ";
    cin >> N;

    int resultadoRecursivo = somatorioRecursivo(N);
    if (resultadoRecursivo != -1) {
        cout << "Somatorio recursivo de 1 a " << N << " e " << resultadoRecursivo << "." << endl;
    }

    int resultadoIterativo = somatorioIterativo(N);
    if (resultadoIterativo != -1) {
        cout << "Somatorio iterativo de 1 a " << N << " e " << resultadoIterativo << "." << endl;
    }

    return 0;
}
