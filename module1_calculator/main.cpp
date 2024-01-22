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
    cout << "This is a demonstration of a Calculator.\n";
    cout << "========================================\n";
    cout << "Demonstrate Addition (5 + 4 = 9)\n";
    cout << addition(5, 4);

    cout << "\nDemonstrate Subtraction (10 - 3 = 7)\n";
    cout << subtration(10, 3);

    cout << "\nDemonstrate Multiplication (3 * 2 = 6)\n";
    cout << multiplication(3, 2);

    cout << "\nDemonstrate Division (8 / 4 = 2)\n";
    cout << division(8, 4);

    return 0;
}