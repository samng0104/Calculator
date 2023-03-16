#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
  Calculator calc;
  calc.readInput();
  calc.calculate();
  calc.printResult();

  return 0;
}
