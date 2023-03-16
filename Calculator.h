#include <cmath>
#include <iostream>
using namespace std;

class Calculator {
  private:
    double num1, num2, result;
    char op;

  public:
    Calculator() {
      num1 = 0;
      num2 = 0;
      result = 0;
      op = '+';
    }

    void readInput() {
      cout << "Enter the first number: ";
      cin >> num1;
      cout << "Enter the operator (+, -, *, /, ^, sin, cos, tan, asin, acos, atan, sinh, cosh, tanh, log, ln, exp, sqrt, !, nPk, nCk): ";
      cin >> op;
      if (op != 'sin' && op != 'cos' && op != 'tan' && op != 'asin' && op != 'acos' && op != 'atan' && op != 'sinh' && op != 'cosh' && op != 'tanh' && op != 'sqrt' && op != '!' && op != 'nPk' && op != 'nCk') {
        cout << "Enter the second number: ";
        cin >> num2;
      }
    }

    double factorial(double n) {
      if (n == 0) {
        return 1;
      } else {
        return n * factorial(n - 1);
      }
    }

    double nPk(double n, double k) {
      return factorial(n) / factorial(n - k);
    }

    double nCk(double n, double k) {
      return nPk(n, k) / factorial(k);
    }

    void calculate() {
      switch (op) {
        case '+':
          result = num1 + num2;
          break;
        case '-':
          result = num1 - num2;
          break;
        case '*':
          result = num1 * num2;
          break;
        case '/':
          if (num2 != 0) {
            result = num1 / num2;
          } else {
            cout << "Error: Division by zero\n";
            return;
          }
          break;
        case '^':
          result = pow(num1, num2);
          break;
        case 'sin':
          result = sin(num1);
          break;
        case 'cos':
          result = cos(num1);
          break;
        case 'tan':
          result = tan(num1);
          break;
        case 'asin':
          result = asin(num1);
          break;
        case 'acos':
          result = acos(num1);
          break;
        case 'atan':
          result = atan(num1);
          break;
        case 'sinh':
          result = sinh(num1);
          break;
        case 'cosh':
          result = cosh(num1);
          break;
        case 'tanh':
          result = tanh(num1);
          break;
        case 'log':
          result = log10(num1);
          break;
        case 'ln':
          result = log(num1);
          break;
        case 'exp':
          result = exp(num1);
          break;
        case 'sqrt':
          result = sqrt(num1);
          break;
        case '!':
          result = factorial(num1);
          break;
        case 'nPk':
          result = nPk(num1, num2);
          break;
        case 'nCk':
          result = nCk(num1, num2);
          break;
        default:
          cout << "Error: Invalid operator\n";
          return;
      }
    }

    void printResult() {
      cout << "Result: " << result << endl;
    }
};