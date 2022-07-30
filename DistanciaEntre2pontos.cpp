#include<bits/stdc++.h>

using namespace std;

    int main() {
        double x1, y1, x2, y2, distancia;
        cin >> x1 >> y1 >> x2 >> y2;
        distancia = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        cout << fixed << setprecision(4);
        cout << sqrt(distancia) << endl;

    return 0;
}
