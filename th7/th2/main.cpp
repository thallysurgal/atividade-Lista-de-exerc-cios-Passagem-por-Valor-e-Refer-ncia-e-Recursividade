#include <iostream>

void converterMinutosParaHoraEMinuto(int totalMinutos, int& hora, int& minuto) {
    hora = totalMinutos / 60;
    minuto = totalMinutos % 60;
}

int main() {
    int totalMinutos;
    int hora, minuto;

    cout << "Digite o total de minutos desde meia-noite: ";
    cin >> totalMinutos;

    if (totalMinutos < 0) {
    cout << "O total de minutos deve ser um numero nao negativo." << endl;
        return 1;
    }

    converterMinutosParaHoraEMinuto(totalMinutos, hora, minuto);

    cout << "A hora e " << hora << " e os minutos sao " << minuto << "." << endl;

    return 0;
}
