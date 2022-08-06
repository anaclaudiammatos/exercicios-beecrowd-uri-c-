#include<bits/stdc++.h>

using namespace std;

int main(){
    double salario, reajuste, novoSalario ;
    cin >> salario;
    int porcentagem;

    if(salario >= 0 && salario <= 400){
        novoSalario = salario*1.15;
        reajuste = salario*0.15;
        porcentagem = 15;
    }else if(salario >= 400.01 && salario <= 800){
        novoSalario = salario*1.12;
        reajuste = salario*0.12;
        porcentagem = 12;
    }else if(salario >= 800.01 && salario <= 1200){
        novoSalario = salario*1.10;
        reajuste = salario*0.10;
        porcentagem = 10;
    }else if(salario >= 1200.01 && salario <= 2000){
        novoSalario = salario*1.07;
        reajuste = salario*0.07;
        porcentagem = 7;
    }else if(salario >= 2000.01){
        novoSalario = salario*1.04;
        reajuste = salario*0.04;
        porcentagem = 4;
    }

    cout << "Novo salario: " << setprecision(2) <<  fixed << novoSalario << endl;
    cout << "Reajuste ganho: " << setprecision(2) <<  fixed << reajuste << endl;
    cout << "Em percentual: " << porcentagem << " %" << endl;

    return 0;
}


