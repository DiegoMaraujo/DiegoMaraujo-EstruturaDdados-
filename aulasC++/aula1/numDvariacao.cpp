#include <iostream>

using namespace std;

int main(){
    int number;
    int valores[10];
    int sum = 0;

    for (int count = 0; count < 10; count++){
        cout << "Insira um novo numero " << endl;
        cin >> number;

        sum += number;
        valores[count] = number;
    }

    float average = (float)sum/10.0;
    float variance = 0.0;

    for (int count = 0; count < 10; count++){
        int value  = valores[count];
        float term = (float)value - average;
    }
    variance = variance /10;
    cout << "A madia da serie é "    << average << endl;
    cout << "A variancia da serie é "<< variance <<endl;

    return 0;
}

