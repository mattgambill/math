#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double balance,principle,contribution,rate = 0;
  int years = 1;
  std::cout << "Enter Interest Rate: ";
  std::cin >> rate;
  rate = rate / 100;
  std::cout << endl << "Enter principle: ";
  std::cin >> principle;
  std::cout << endl << "Enter monthly contribution: ";
  std::cin >> contribution;
  contribution *= 12;
  std::cout << endl << "Enter number of years: ";
  std::cin >> years;
  std::cout << '\n';

  for (int i = 0; i <= years; i++) {
      balance = principle * pow((1 + rate) , i) + contribution * (((pow((1 + rate),(i + 1)) - (1 + rate) )/ rate));
      cout << i << " , $" << balance <<endl;
  }


  std::cout << "\nThe balance after " << years << " years is: $" << balance << '\n';
  std::cout << "You contributed: " <<contribution * years * 100 / balance<< "% \n";
  return 0;
}
