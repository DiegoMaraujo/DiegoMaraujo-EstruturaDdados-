#include <iostream>

using std::cout;

int main() {
    int n1;
    int n2;

    cout << "Digite o primeiro numero ";
    std::cin >> n1;
    cout << "Digite o segundo numero ";
    std::cin >> n2;

    if(n1 == n2)
        cout << n1 << " == " << n2 << std::endl;
    if (n1 != n2)
        cout << n1 << " != " << n2 << std::endl;
    if (n1 < n2)
        cout << n1 << " < " << n2 << std::endl;
    if (n1 > n2)
        cout << n1 << " > " << n2 << std::endl;

    if (n1 <= n2)
        cout << n1 << " <= " << n2 << std::endl;
    if (n1 >= n2)
        cout << n1 << " >= " << n2 << std::endl;

    return 0;

}