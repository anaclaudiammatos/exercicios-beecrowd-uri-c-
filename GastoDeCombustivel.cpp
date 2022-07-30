#include<bits/stdc++.h>

using namespace std;

    int main() {
        double tempo, velocidade, litros;
        cin >> tempo >> velocidade;
        litros = tempo * velocidade / 12;
        cout << fixed << setprecision(3);
        cout << litros << endl;

        return 0;
    }
