#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

// 1 peso = 0.051 USD
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
// 1 reais = 0.19 USD
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
// 1 soles = 0.26 USD
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

dollars = (0.051*pesos) + (0.19*reais) + (0.26*soles);

std::cout << "US Dollars = $" << dollars << "\n";



}