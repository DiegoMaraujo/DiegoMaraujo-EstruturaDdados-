#include <iostream>

int main(){
    int numElem;
    std::cout << "Digite o tamanho do vetor ";
    std::cin >> numElem;

    int* c = new int[numElem];

    for (int i = 0; i < numElem; i++){
        c[i] =2*i;
    }
    for (int i =0; i < numElem; i++){
        std::cout << "c[" << i << "] = "<< c[i] << "\n";
    }
    delete[] c;
    return 0;

}