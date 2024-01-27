#include <iostream>
#include <string>
using namespace std;

/*  
    Addition adds opA and opB together and outputs the result
    Parameters - opA, opB (both parameters are doubles)
    opA is value 1 and opB is value 2 to be added to value 1
    Output - value (value is a double)
    value is the sum of opA and opB
*/
double addition(double opA, double opB) {
    double value;

    value = opA + opB;

    return value;
}
/*
    Subtraction subtracts opB from opA and outputs the result
    Parameters - opA, opB (both parameters are doubles)
    opA is value 1 and opB is value 2 to be subtracted from value 1
    Output - value (value is a double)
    value is the difference between opA and opB
*/
double subtraction(double opA, double opB) {
    double value;

    value = opA - opB;

    return value;
}
/*
    Multiplication multiplies opA and opB together and outputs the result
    Parameters - opA, opB (both parameters are doubles)
    opA is value 1 and opB is value 2 to be multiplied with value 1
    Output - value (value is a double)
    value is the product of multiplying opA and opB
*/
double multiplication(double opA, double opB) {
    double value;

    value = opA * opB;

    return value;
}
/*
    Division divides opA by opB and outputs the result
    Parameters - opA, opB (both parameters are doubles)
    opA is value 1 and opB is value 2 of which value 1 is to be divided by
    Output - value (value is a double)
    value is the quotient of opA with opB
*/
double division(double opA, double opB) {
    double value;

    value = opA / opB;

    return value;
}
/*
    checkRun asks the user if they want to continue using the calculator
    program, takes no parameters, and contains error handling to ensure
    no program crashes occur.
*/
bool checkRun() {
    char check;
    while (check != 'y' || check != 'n') {
        cout << "\n\nContinue using calculator? Y or N?\n";
        cin >> check;
        if (check == 'y' || check == 'Y') {
            return true;
        }
        else if (check == 'n' || check == 'N') {
            check = 'n';
            return false;
        }
        else {
            cout << "Please enter Y or N";
        }
    }
    return false;
}
/*
    CheckDouble determines if the user input is of type Double by converting
    the string input into a double to ensure that no program errors occur 
    and that the program continues to run smoothly.
    Parameters - input (string)
    Output - num (double)
*/
double checkDouble(string input) {
    double num;
    bool error = true;
    while (error == true) {
        try {
            num = stod(input);
        }
        catch (invalid_argument) {
            cerr << "Invalid input\n";
            cin >> input;
            continue;
        }
        error = false;
    }
    return num;
}
/*
    CheckOperator determines if the user input is of type Double by converting
    the string input into a double to ensure that no program errors occur 
    and that the program continues to run smoothly, and checks if the chosen
    input matches the options in the given list of operations.
    Parameters - input (string)
    Output - num (double)
*/
double checkOperator(string input) {
    double num;
    bool error = true;
    while (error == true) {
        try {
            num = stod(input);
        }
        catch (invalid_argument) {
            cerr << "Invalid input\n";
            cin >> input;
            continue;
        }
        if (num > 4 || num < 1) {
            cout << "Invalid input\n";
            cin >> input;
            continue;
        }
        error = false;
    }
    return num;
}
/*
    Calculator allows the user to select a mathematical operation
    and two values to perform in that operation
    Parameters - operation, opA, opB (all parameters are doubles)
    operation is chosen from a list of values and is compared
    to preset definitions to select the user's chosen operation
    opA is value 1 and opB is value 2, these values are to be used
    in the user's chosen operation
    Output - value (value is a double)
    value is the results of the user's chosen mathematical operation
    using the user's chosen values
*/
double calculator(double operation, double opA, double opB) {
    double value;

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
        if (opB == 0) {
            cout << "Cannot Divide by 0\n";
            return 0;
        }
        value = division(opA, opB);
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

    double result;
    bool run = true;
    while (run == true) {
        double end = 0;
        while (end == 0) {
            
            double num1;
            string input;
            cout << "\nPlease enter a number\n";
            cin >> input;
            num1 = checkDouble(input);
            

            double op;
            cout << "\nPlease select an operation:\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cin >> input;
            op = checkOperator(input);

            double num2;
            cout << "\nPlease enter a second number:\n";
            cin >> input;
            num2 = checkDouble(input);

            result = calculator(op, num1, num2);
            end = 1;
        }

        cout << "\nresult = ";
        cout << result;

        run = checkRun();
    }

    return 0;
}