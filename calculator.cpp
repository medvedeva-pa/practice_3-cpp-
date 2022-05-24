#include "std_lib_facilities.h"

int main() {

    int n1;
    int n2;
    char operation;

    cout << "enter 2 integer numbers and a symbol of operation: \n";
    cin >> n1 >> n2 >> operation;

    try {
        if (operation == '/' and n2 == 0) {
            throw 1;
        }
        if (cin.fail()) {
            throw 2;
        }

            switch (operation) {
        case '+':
            cout << n1 + n2;
            break;
        case '-':
            cout << n1 - n2;
            break;
        case '*':
            cout << n1 * n2;
            break;
        case '/':
            cout << n1 / n2;
            break;

        default:
            cout << "sorry, calculator is unfamiliar with this operation.\n";
            break;
        }
    }
    catch (int e) {
        if (e == 1)
            cout << "don’t divide by zero.\n";
        if (e == 2)
            cout << "enter a number, not a symbol.\n";
    }
    return 0;
}
