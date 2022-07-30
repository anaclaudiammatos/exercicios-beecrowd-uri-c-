#include<bits/stdc++.h>

using namespace std;

int main() {
    double raio, resultado;
    cin >> raio;
    resultado = ((4/3.0) * 3.14159 * raio * raio * raio);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << resultado << endl;

    return 0;

}

