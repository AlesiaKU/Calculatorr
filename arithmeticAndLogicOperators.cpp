#include <iostream> 
#include <string> 
#include <cmath>
#include "arithmeticAndLogicOperators.h"

using std::string;

// int arguements
int sum(const int& a, const int& b) {
    return a + b;
}
int sub(const int& a, const int& b) {
    return a - b;
}
int mult(const int& a, const int& b) {
    return a * b;
}
int division(const int& a, const int& b) {
    return a / b;
}
int mod(const int& a, const int& b) {
    return a % b;
}
int sqr(const int& a) {
    return sqrt(a);
}

int unaryPlus(const int& a)
{
    return +a;
}

int unaryMinus(const int& a)
{
    return -a;
}

// double arguements 
double sum(const double& a, const double& b) {
    return a + b;
}
double sub(const double& a, const double& b) {
    return a - b;
}
double mult(const double& a, const double& b) {
    return a * b;
}
double division(const double& a, const double& b) {
    return a / b;
}
double sqr(const double& a) {
    return sqrt(a);
}
double unaryPlus(const double& a)
{
    return +a;
}
double unaryMinus(const double& a)
{
    return -a;
}

bool isUnary(Operation operation) {
    return operation > 5 ? true : false;
};
double applyUnaryOperation(Operation operation, double a)
{
    double result{};
    switch (operation) {
    case Sqr: result = sqr(a);
        break;
    case UPl: result = unaryPlus(a);
        break;
    case UMIN: result = unaryMinus(a);
        break;
    default: break;
    }
    std::cout << result << std::endl;

    return 0.0;
};

int applyUnaryOperation(Operation operation, int a)
{
    int result{};
    switch (operation) {
    case Sqr: result = sqr(a);
        break;
    case UPl: result = unaryPlus(a);
        break;
    case UMIN: result = unaryMinus(a);
        break;
    default: break;
    }
    std::cout << result << std::endl;

    return 0;
};


double applyBinaryOperation(Operation operation, double a, double b) {

    double result{};
    switch (operation) {
    case Sum: result = sum(a, b);
        break;
    case Sub: result = sub(a, b);
        break;
    case Mult: result = mult(a, b);
        break;
    case Division: result = division(a, b);
        break;
    default: break;
    }
    std::cout << result << std::endl;
    return 0;
};


int applyBinaryOperation(Operation operation, int a, int b) {

    int result{};
    switch (operation) {
    case Sum: result = sum(a, b);
        break;
    case Sub: result = sub(a, b);
        break;
    case Mult: result = mult(a, b);
        break;
    case Division: result = division(a, b);
        break;
    default: break;
    }
    std::cout << result << std::endl;
    return 0;
};
void printResult(double result) {
    std::cout << result;
}
void printResult(int result) {
    std::cout << result;
};
void askForNumber(const string& label, int& arg) {
    std::cout << label;
    std::cin >> arg;
}
void askForNumber(const string& label, double& arg) {
    std::cout << label;
    std::cin >> arg;
}