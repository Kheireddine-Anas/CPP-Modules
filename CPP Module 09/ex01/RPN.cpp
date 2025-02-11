#include "RPN.hpp"
#include <iostream>


RPN::RPN() {}

RPN::RPN( const RPN& other ) {
    this->stack = other.stack;
}

RPN& RPN::operator=( const RPN& other ) {
    if (this != &other) {
        this->stack = other.stack;
    }
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator( char c ) const {
    return (c == '+' ||  c == '-' || c == '*' || c == '/');
}

int RPN::performOperation( char op, int a, int b ) const {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                throw std::runtime_error("Error: Division by zero.");
            }
            return a / b;
        default:
            throw std::runtime_error("Error: Invalid operator.");
    }
}

void RPN::evaluate( const std::string& expression ) {
    for (size_t i = 0; i < expression.length(); ++i) {
        char c = expression[i];
        if (c == ' ') continue;

        if (isdigit(c)) {
            stack.push(c - '0');
        }
        else if (isOperator(c)) {
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            int rzlt = performOperation(c, a, b);
            stack.push(rzlt);
        } else {
            throw std::runtime_error("Error: Invalid character in expression.");
        }
    }

    if (stack.size() > 1) {
        throw std::runtime_error("Error: Invalid expression.");
    }
    std::cout << stack.top() << std::endl;
}