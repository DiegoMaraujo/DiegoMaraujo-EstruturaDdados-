#include <iostream>

const int numElem =10;
int main(){
    int c[numElem];
    for (int i =0; i < numElem; i++){
        c[i] = 2*i;
    }
    for (int i =0; i < numElem; i++){
        std::cout << "c["<< i << "] = " << c[i] << "\n";
    }
    return 0;
}