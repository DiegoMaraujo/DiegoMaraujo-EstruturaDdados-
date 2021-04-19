#include <iostream>

using namespace std;

int main(){
    int total;

    for (int num = 2; num <=20; num += 2)
        total =+ num;

    cout << "A soma da serie é" << total << endl;

    return 0;
}