#include <iostream>

int main(){


int n1;
int n2;

std::cout << "Digite o primeiro numero: ";
std::cin >> n1;
std::cout << "Digite o segundo numero ";
std::cin >> n2;

int sum    = n1 + n2;
int sub    = n1 - n2;
int mul    = n1 * n2;
int div    = n1 / n2;
float fdiv = (float)n1 / (float)n2;
int res    = n1 % n2;


std::cout << "soma   "          << sum << std::endl;
std::cout << "subtrsção "       << sub << std::endl;
std::cout << "multiplicação "   << mul << std::endl;
std::cout << "divição inteira " << div << std::endl;
std::cout << "divisão real "    << fdiv << std::endl;
std::cout << "resto "           << res << std:: endl;

return 0;

}
