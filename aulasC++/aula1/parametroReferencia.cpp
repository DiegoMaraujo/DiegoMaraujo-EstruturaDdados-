#include <iostream>

using namespace std;

void tracaPorReferencia(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=2, b=3;
    cout<<"Antes a = "<<a<<" b = " << b<<endl;
    tracaPorReferencia(a,b);
    cout<<"Depois a = "<<a<<" b = "<< b << endl;

    return 0;
}