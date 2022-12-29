#include <iostream> 
#include <string> 
#include <cmath>
#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"

int main() {
    std::string varType;
    Operation operation;

    while (true) {
        std::cout << "type? ";
        std::cin >> varType;
        if (varType == "double") {
            operation = askForOperation();
            double result;
            if (isUnary(operation)) {
                double x;
                askForNumber("Input the number ", x);
                result = applyUnaryOperation(operation, x);
            }
            else {
                double a;
                askForNumber("Input the 1st number ", a);
                double b;
                askForNumber("Input the 2nd number ", b);
                result = applyBinaryOperation(operation, a, b);
            }
            printResult(result);
        }
        else {
            operation = askForOperation();
            int result;
            if (isUnary(operation)) {
                int x;
                askForNumber("Input the number ", x);
                result = applyUnaryOperation(operation, x);
            }
            else {
                int a;
                askForNumber("Input the 1st number ", a);
                int b;
                askForNumber("Input the 2nd number ", b);
                result = applyBinaryOperation(operation, a, b);
            }
            printResult(result);
        }

    }

    return 0;
}

Operation askForOperation() {
    std::string menu = "\nSum - 0, \nSub - 1, \nMult - 2,\nDivision - 3,\nMod - 4, \nExp - 5, \nSqr - 6, \nUPl - 7, \nUMIN - 8, \nSIN - 9, \nCOS - 10, \nTAN - 11, \nCTG - 12, \n";

    int numberOfOperation;

    std::cout << "Operation? " << std::endl;
    std::cout << "enter number " << menu;
    std::cin >> numberOfOperation;

 
    return static_cast<Operation>(numberOfOperation);


}

