#include<bits/stdc++.h>

using namespace std;

int main(){

    int x;
    int alcool = 0;
    int gasolina = 0;
    int disel = 0;

    while(1){
        cin >> x;
        if( x == 4){
            break;
        }else if( x == 1){
            alcool++;
        }else if( x == 2){
            gasolina++;
        }else if( x == 3){
            disel++;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << disel << endl;
}
