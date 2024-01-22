#include <iostream>
using namespace std;

/*  
    Addition adds opA and opB together and outputs the result
    Parameters - opA, opB (both parameters are integers)
    opA is value 1 and opB is value 2 to be added to value 1
    Output - value (value is an integer)
    value is the sum of opA and opB
*/
int addition(int opA, int opB) {
    int value;

    value = opA + opB;

    return value;
}
/*
    Subtraction subtracts opB from opA and outputs the result
    Parameters - opA, opB (both parameters are integers)
    opA is value 1 and opB is value 2 to be subtracted from value 1
    Output - value (value is an integer)
    value is the difference between opA and opB
*/
int subtration(int opA, int opB) {
    int value;

    value = opA - opB;

    return value;
}
/*
    Multiplication multiplies opA and opB together and outputs the result
    Parameters - opA, opB (both parameters are integers)
    opA is value 1 and opB is value 2 to be multiplied with value 1
    Output - value (value is an integer)
    value is the product of multiplying opA and opB
*/
int multiplication(int opA, int opB) {
    int value;

    value = opA * opB;

    return value;
}
/*
    Division divides opA by opB and outputs the result
    Parameters - opA, opB (both parameters are integers)
    opA is value 1 and opB is value 2 of which value 1 is to be divided by
    Output - value (value is an integer)
    value is the quotient of opA with opB
*/
int division(int opA, int opB) {
    int value;

    value = opA / opB;

    return value;
}

int main() {
    cout << "This is a demonstration of a Calculator.\n";
    cout << "========================================\n";
    cout << "\nDemonstrate Addition (5 + 4 = 9)\n";
    cout << addition(5, 4); //Adds 5 and 4, output should be 9
    cout << "\n";

    cout << "\nDemonstrate Subtraction (10 - 3 = 7)\n";
    cout << subtration(10, 3); //Subtracts 3 from 10, output should be 7
    cout << "\n";

    cout << "\nDemonstrate Multiplication (3 * 2 = 6)\n";
    cout << multiplication(3, 2); //Multiplies 3 by 2, output should be 6
    cout << "\n";

    cout << "\nDemonstrate Division (8 / 4 = 2)\n";
    cout << division(8, 4); //Divides 8 by 4, output should be 2
    cout << "\n";

    return 0;
}