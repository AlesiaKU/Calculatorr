#pragma once

#include <iostream> 
#include <string> 
#include <cmath>
using std::string;

enum Operation {
    Sum,
    Sub,
    Mult,
    Division,
    Mod,
    Exp,// = 100,
    Sqr,
    UPl,
    UMIN,
    SIN,
    COS,
    TAN,
    CTG,
    LOG,
    FACT,
};

int sum(const int&, const int&);
int sub(const int&, const int&);
int mult(const int&, const int&);
int division(const int&, const int&);
int mod(const int&, const int&);
int sqr(const int&);
int unaryPlus(const int&);
int unaryMinus(const int&);



double sum(const double&, const double&);
double sub(const double&, const double&);
double mult(const double&, const double&);
double division(const double&, const double&);
double sqr(const double&);
double unaryPlus(const double&);
double unaryMinus(const double&);

bool isUnary(Operation);
double applyUnaryOperation(Operation, double x);
double applyBinaryOperation(Operation, double a, double b);
int applyUnaryOperation(Operation, int x);
int applyBinaryOperation(Operation, int a, int b);
void printResult(double);
void askForNumber(const string&, int&);
void askForNumber(const string&, double&);
// —читаем, что бинарные - 0 - 99, унарные - 100+ 


Operation askForOperation();

