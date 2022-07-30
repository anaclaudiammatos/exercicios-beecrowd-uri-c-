#include<bits/stdc++.h>

using namespace std;

int main() {
    string vendedor;
    double salarioFixo, vendasEfetuadas, total;
    cin >> vendedor;
    cin >> salarioFixo >> vendasEfetuadas;
    total = ((vendasEfetuadas * 0.15) + salarioFixo);
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;


    return 0;
}

