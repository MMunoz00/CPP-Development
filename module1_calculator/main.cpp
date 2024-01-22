#include <iostream>
using namespace std;

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
int main() {
    cout << "This is a demonstration of a Calculator.";
    cout << "========================================";
    cout << "Demonstrate Addition (5 + 4 = 9)";
    cout << addition(5, 4);

    cout << "Demonstrate Subtraction (10 - 3 = 7)";
    cout << subtration(10, 3);

    cout << "Demonstrate Multiplication (3 * 2 = 6)";
    cout << multiplication(3, 2);

    cout << "Demonstrate Division (8 / 4 = 2)";
    cout << division(8, 4);

    return 0;
}