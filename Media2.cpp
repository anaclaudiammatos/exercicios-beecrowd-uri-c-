#include<bits/stdc++.h>

using namespace std;

int main() {
    double notaA, notaB, notaC, media;
    cin >> notaA >> notaB >> notaC;
    media = (((notaA * 2) + (notaB * 3) + (notaC * 5))/ 10);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
    return 0;
}
