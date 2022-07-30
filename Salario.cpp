#include<bits/stdc++.h>

using namespace std;

int main() {
    int funcionarios, horas;
    double valor, salario;
    cin >> funcionarios >> horas >> valor;
    salario = horas * valor;
    cout << "NUMBER = " << funcionarios << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}

