#include<bits/stdc++.h>

using namespace std;

int main() {
    double nota1, nota2, media;
    cin >> nota1 >> nota2;
    media = (((nota1 * 3.5) + (nota2 * 7.5)) / 11);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
    return 0;
}
