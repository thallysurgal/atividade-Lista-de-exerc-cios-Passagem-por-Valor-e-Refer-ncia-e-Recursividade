#include <iostream>
using namespace std;

int fibonacciRecursivo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int fibonacciIterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, resultado;
    for (int i = 2; i <= n; ++i) {
        resultado = a + b;
        a = b;
        b = resultado;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Informe a posicao desejada na sequencia de Fibonacci: ";
    cin >> n;

    cout << "Fibonacci (Recursivo) de " << n << " = " << fibonacciRecursivo(n) << endl;
    cout << "Fibonacci (Iterativo) de " << n << " = " << fibonacciIterativo(n) << endl;

    return 0;
}
