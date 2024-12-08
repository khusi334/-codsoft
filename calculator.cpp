#include<bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, result;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Perform the operation corresponding to the
    //  given operator
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }

    if (result != -DBL_MAX)
        cout << "Result: " << result;
    return 0;
}
