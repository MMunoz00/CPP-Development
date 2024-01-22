#include <iostream>
using namespace std;

int main() {
    cout << "This is a demonstration of a Calculator.";
    cout << "========================================";
    cout << "Demonstrate Addition (5 + 4 = 9)";
    cout << addition();

    cout << "Demonstrate Subtraction (10 - 3 = 7)";
    cout << subtration();

    cout << "Demonstrate Multiplication (3 * 2 = 6)";
    cout << multiplication();

    cout << "Demonstrate Division (8 / 4 = 2)";
    cout << division();

    return 0;
}

int addition(int opA, int opB) {
    int value;

    value = opA + opB;

    return value;
}

int subtration(int opA, int opB) {
    int value;

    value = opA - opB;

    return value;
}

int multiplication(int opA, int opB) {
    int value;

    value = opA * opB;

    return value;
}

int division(int opA, int opB) {
    int value;

    value = opA / opB;

    return value;
}