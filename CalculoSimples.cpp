#include<bits/stdc++.h>

using namespace std;

int main() {
    int p1, n1, p2, n2;
    double v1, v2, total;
    cin >> p1 >> n1 >> fixed >> setprecision(2) >> v1 >> p2 >> n2 >> fixed >> setprecision(2) >> v2;
    total = ((n1 * v1) + (n2 * v2));
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

return 0;
}
