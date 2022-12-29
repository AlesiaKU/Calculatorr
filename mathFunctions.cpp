#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#pragma once

#include <iostream> 
#include <string> 
#include <cmath>

int e = 2.71828182846;

int sin(const int& x)
{
	int result = 0;
	int summand = 1;
	int num = 2;
	while (std::abs(summand) >= e) {
		result += summand;
		summand *= -x * x / ((2 * num - 2) * (2 * num - 3));
		++num;
	}
	return result;
}

int cos(const int& x)
{
	int result = 0;
	int summand = x;
	int num = 1;
	while (std::abs(summand) > e) {
		result += summand;
		summand *= -x * x / ((2 * num + 1) * (2 * num));
		++num;
	}
	return result;
}

int tan(const int& x)
{
	return sin(x) / cos(x);
}

int ctg(const int& x)
{
	return 1/tan(x);
}

int Log(const int& x)
{
	double lg = log10(x);
	return log10(x);
}

int Fact(const int& x) {
	int F;
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	F = x * Fact(x - 1);
	return F;
}

double sin(const double& x)
{
	double result = 0;
	double summand = 1;
	int num = 2;
	while (std::abs(summand) >= e) {
		result += summand;
		summand *= -x * x / ((2 * num - 2) * (2 * num - 3));
		++num;
	}
	return result;
}

double cos(const double& x)
{
	double result = 0;
	double summand = x;
	int num = 1;
	while (std::abs(summand) > e) {
		result += summand;
		summand *= -x * x / ((2 * num + 1) * (2 * num));
		++num;
	}
	return result;
}

double tan(const double& x)
{ 
	return 0;
}

double ctg(const double& x)
{
	return 0.0;
}

double Log(const double& a)
{
	double lg = log10(a);
	return log10(a);
}

double Fact(const double& a) {
	double F;
	if (a == 0)
	{
		return 0;
	}
	if (a == 1)
	{
		return 1;
	}
	F = a * Fact(a - 1);
	return F;
}

double applyUnaryOperation(Operation operation, double x)
{
    double result{};
    switch (operation) {
    /*case SIN: result = sin(x);
        break;
    case COS: result = cos(x);
        break;
    case TAN: result = tan(x);
        break;*/
	case CTG: result = ctg(x);
		break;
	case LOG: result = log10(x);
		break;
	case FACT: result = Fact(x);
		break;
    default: break;
    }
    std::cout << result << std::endl;

    return result;
};

int applyUnaryOperation(Operation operation, int x)
{
    int result{};
    switch (operation) {
    case SIN: result = sin(x);
        break;
    case COS: result = cos(x);
        break;
    case TAN: result = tan(x);
        break;
	case CTG: result = ctg(x);
		break;
	case LOG: result = log10(x);
		break;
	case FACT: result = Fact(x);
		break;
    default: break;
    }
    std::cout << result << std::endl;

    return result;
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