#include <iostream>

using namespace std;

void converterSegundosParaHoraEMinutoESegundo(int segundos, int& horas, int& minutos, int& segundosRestantes) {
    horas = segundos / 3600;
    int segundosRestantesParaMinutos = segundos % 3600;
    minutos = segundosRestantesParaMinutos / 60;
    segundosRestantes = segundosRestantesParaMinutos % 60;
}

int main() {
    int segundos;
    int horas, minutos, segundosRestantes;

    cout << "Digite a duracao em segundos: ";
    cin >> segundos;

    if (segundos < 0) {
        cout << "A duracao em segundos deve ser um numero nao negativo." << endl;
        return 1;
    }

    converterSegundosParaHoraEMinutoESegundo(segundos, horas, minutos, segundosRestantes);

    cout << segundos << " segundos e equivalente a " << horas << " horas, "
         << minutos << " minutos e " << segundosRestantes << " segundos." << endl;

    return 0;
}
