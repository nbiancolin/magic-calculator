#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

#include "calculator.h" 

Calculator::Calculator() {}

Calculator::~Calculator() {
    // Cleanup: Delete dynamically allocated operators
    for (Operator* op : operators) {
        delete op;
    }
}

void Calculator::addOperator(Operator* op) {
    operators.push_back(op);
}

float Calculator::calc(float a, float b, char op) const {

  int operatorIndex = find(operators.begin(), operators.end(), op);
    if (operatorIndex >= 0 && operatorIndex < operators.size()) {
        return operators[operatorIndex]->calculate(a, b);
    }
    return 0.0; // Default value for an invalid operatorIndex
}

float Add::calculate(float operand1, float operand2) const {
    return operand1 + operand2;
}


//I am getting lazy, this should work!


