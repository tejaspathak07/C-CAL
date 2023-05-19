// program for building a calculator 
#include <iostream>
using namespace std;

int main() {
    char op;
    double N1, N2;

    cout << "Enter operator sign (+, -, *, /): "<< endl;;
    cin >> op;
    cout << "Enter two operands: "<< endl;
    cin >> N1 >> N2;

    switch(op) {
        case '+':
            cout << N1 << " + " << N2 << " = " << N1 + N2<< endl;
            break;

        case '-':
            cout << N1 << " - " << N2 << " = " << N1 - N2<<endl;
            break;

        case '*':
            cout << N1 << " * " << N2 << " = " << N1 * N2<<endl;
            break;

        case '/':
            if(N2 == 0) {
                cout << "Error: Divide by zero";
            } else { 
                cout << N1 << " / " << N2<< " = " << N1 / N2<< endl;
            }
            break;

        default:
            cout << "Error: Invalid operator"<<endl;
            break;
    }
  return 0;
}