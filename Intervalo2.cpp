#include<bits/stdc++.h>

using namespace std;

int main(){
    int quantidade, x, y, in = 0, out = 0;
    cin >> quantidade;

    for(int x = 0; x < quantidade; x++){
        cin >> y;
        if(y >= 10 && y <= 20){
            in++;
        }else{
            out++;
        }
    }
    cout << in << " in"  << endl;
    cout << out << " out" << endl;
}
