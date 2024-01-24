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
int subtraction(int opA, int opB) {
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
/*
    Calculator allows the user to select a mathematical operation
    and two values to perform in that operation
    Parameters - operation, opA, opB (all parameters are integers)
    operation is chosen from a list of values and is compared
    to preset definitions to select the user's chosen operation
    opA is value 1 and opB is value 2, these values are to be used
    in the user's chosen operation
    Output - value (value is an integer)
    value is the results of the user's chosen mathematical operation
    using the user's chosen values
*/
int calculator(int operation, int opA, int opB) {
    int value;

    if (operation == 1) {
        value = addition(opA, opB);
    }
    else if (operation == 2) {
        value = subtraction(opA, opB);
    }
    else if (operation == 3) {
        value = multiplication(opA, opB);
    }
    else if (operation == 4) {
        value = division(opA, opB);
    }
    else {
        cout << "Invalid Operation";
        return 0;
    }

    return value;
}

int main() {
    cout << "This is a demonstration of a Calculator.\n";
    cout << "========================================\n";
    cout << "\nDemonstrate Addition (5 + 4 = 9)\n";
    cout << addition(5, 4); //Adds 5 and 4, output should be 9
    cout << "\n";

    cout << "\nDemonstrate Subtraction (10 - 3 = 7)\n";
    cout << subtraction(10, 3); //Subtracts 3 from 10, output should be 7
    cout << "\n";

    cout << "\nDemonstrate Multiplication (3 * 2 = 6)\n";
    cout << multiplication(3, 2); //Multiplies 3 by 2, output should be 6
    cout << "\n";

    cout << "\nDemonstrate Division (8 / 4 = 2)\n";
    cout << division(8, 4); //Divides 8 by 4, output should be 2
    cout << "\n";

    int end = 0;
    while (end == 0) {

        int num1;
        cout << "\nPlease select a first number:\n";
        cin >> num1;
        cout << "\n";

        int op;
        cout << "\nPlease select an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cin >> op;
        cout << "\n";

        int num2;
        cout << "\nPlease select a second number:\n";
        cin >> num2;
        cout << "\n";

        end = calculator(op, num1, num2);

    }

    cout << end;

    return 0;
}