#include<bits/stdc++.h>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    void calculate() {
        if (operation == "add") {
            cout << "Result: " << a + b << endl;
        } else if (operation == "subtract") {
            cout << "Result: " << a - b << endl;
        } else if (operation == "multiply") {
            cout << "Result: " << a * b << endl;
        } else if (operation == "divide") {
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
        } else {
            cout << "Error: Invalid operation" << endl;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    Calculator calc(a, b, op);
    calc.calculate();

    return 0;
}
