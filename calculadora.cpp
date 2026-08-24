#include <iostream>

using namespace std;

int main() {
    char operacion;
    double num1, num2;

    cout << "=================================\n";
    cout << "     CALCULADORA EN C++          \n";
    cout << "=================================\n";
    cout << "Elige una operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "\nResultado: ";
    switch (operacion) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error: No se puede dividir entre cero.";
            break;
        default:
            cout << "Operacion no valida.";
            break;
    }

    cout << "\n\nPresiona Enter para salir...";
    cin.ignore();
    cin.get();

    return 0;
}