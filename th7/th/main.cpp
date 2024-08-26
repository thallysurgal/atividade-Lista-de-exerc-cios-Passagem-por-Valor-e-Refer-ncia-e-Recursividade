#include <iostream>

void converterIdadeEmDias(int dias, int& anos, int& meses, int& diasRestantes) {
    const int DIAS_EM_UM_ANO = 365;
    const int DIAS_EM_UM_MES = 30;

    anos = dias / DIAS_EM_UM_ANO;
    int diasRestantesParaMeses = dias % DIAS_EM_UM_ANO;

    meses = diasRestantesParaMeses / DIAS_EM_UM_MES;
    diasRestantes = diasRestantesParaMeses % DIAS_EM_UM_MES;
}

int main() {
    int idadeEmDias;
    int anos, meses, diasRestantes;

    cout << "Digite a idade em dias: ";
    cin >> idadeEmDias;

    if (idadeEmDias < 0) {
    cout << "A idade em dias deve ser um número não negativo." << endl;
        return 1;
    }

    converterIdadeEmDias(idadeEmDias, anos, meses, diasRestantes);

    cout << idadeEmDias << " dias é equivalente a " << anos << " anos, "
              << meses << " meses e " << diasRestantes << " dias." << endl;

    return 0;
}
