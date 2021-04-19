#include <iostream>

using namespace std;

int main() {
    int n1;
    int cont = 0;
    int acu = 0;

    while (acu < 10){
        cout << "Digite um numero ("<< cont << ")" << endl;
        std::cin >> n1;

        if (n1 < 5){
            acu++; 
        }
        cont++;
    }
    cout << "Quantidade de numeros menores que 5 [" << acu << "]" << endl;

    return 0;
    
}