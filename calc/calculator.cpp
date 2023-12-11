#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

#include "calculator.h" //change so it works with words as wekk

void calc(stringstream &ss){
    char op;
  float num1, num2;


  ss >> num1 >> op >> num2;

    if(ss.fail()) {
        cout << "error, invalid input" << endl;
        return;
    }

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;

    //case '%':
    //  cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
    //  break;
    case '^':
      cout << num1 << " ^" << num2 << " = " << pow(num1, num2) << endl;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct" << endl;
      break;
  }

}