/******************************************************************************
Verificar a menor quantidade de cédulas e moedas que um valor monetário n pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas consideradas 
são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout << "digite n: ";
    cin >> n;
    
    int nota1 = 100;
    int nota2 = 50;
    int nota3 = 20;
    int nota4 = 10;
    int nota5 = 5;
    int nota6 = 2;
    
    int moeda1 = 100;
    int moeda2 = 50;
    int moeda3 = 25;
    int moeda4 = 10;
    int moeda5 = 5;
    int moeda6 = 1;
    
     cout << "notas" << endl;
    while (n >= nota1) {
        cout << nota1 << " = " << n / nota1 << endl;
        n %= nota1;
    }

    while (n >= nota2) {
        cout << nota2 << " = " << n / nota2 << endl;
        n %= nota2;
    }

    while (n >= nota3) {
        cout << nota3 <<  " = " << n / nota3 << endl;
        n %= nota3;
    }

    while (n >= nota4) {
        cout << nota4 <<  " = " << n / nota4 << endl;
        n %= nota4;
    }

    while (n >= nota5) {
        cout <<  nota5 <<  " = " <<  n / nota5 << endl;
        n %= nota5;
    }

    while (n >= nota6) {
        cout << nota6 << " = " << n / nota6 << endl;
        n %= nota6;
    }

    
    cout << "Moedas:" << endl;
    while (n >= moeda1) {
        cout << moeda1 / 100.0 << " = " << n / moeda1 << endl;
        n %= moeda1;
    }

    while (n >= moeda2) {
        cout << moeda2 / 100.0 << " = " << n / moeda2 << endl;
        n %= moeda2;
    }

    while (n >= moeda3) {
        cout << moeda3 / 100.0 << " = " << n / moeda3 << endl;
        n %= moeda3;
    }

    while (n >= moeda4) {
        cout <<  moeda4 / 100.0 << " = " << n / moeda4 << endl;
        n %= moeda4;
    }

    while (n >= moeda5) {
        cout <<  moeda5 / 100.0 << "= " << n / moeda5 << endl;
        n %= moeda5;
    }

    while (n >= moeda6) {
        cout << moeda6 / 100.0 << " = " << n / moeda6 << endl;
        n %= moeda6;
    }

    return 0;
}



