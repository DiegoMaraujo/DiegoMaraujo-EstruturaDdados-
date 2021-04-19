#include <iostream>
#include "queue.h"


using namespace std;

int main(){
    char character;
    Queue queue;
    char queueChar;
    cout << "Adicione uma string "<< endl;
    cin.get(character);
    while (character != '\n' and !queue.isfull()){
        queue.enqueue(character);
        cin.get(character);
    }
    while (!queue.isEmpty()){
        queueChar = queue.dequeue();
        cout << queueChar;
    }
    cout << endl;
}