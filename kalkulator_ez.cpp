#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "Masukkan operasi matematika (+, -, *, /, ^, s, c, t) " << endl;
    cout << "(s untuk sin, c untuk cos, t untuk tan): ";
    cin >> operation;
    
    if (operation == 's' || operation == 'c' || operation == 't') {
        cout << "Masukkan sudut dalam derajat: ";
        cin >> num1;
        num1 = num1 * M_PI / 180.0; // Convert to radians
    } else {
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        
        if (operation != '+' && operation != '-' && operation != '*' && 
            operation != '/' && operation != '^') {
            cout << "Error: Invalid operation!" << endl;
            return 1;
        }
        
        cout << "Masukkan nomor kedua: ";
        cin >> num2;
    }
    
    double result;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 's':
            result = sin(num1);
            break;
        case 'c':
            result = cos(num1);
            break;
        case 't':
            if (cos(num1) != 0) {
                result = tan(num1);
            } else {
                cout << "Error: Tangent tak terdefinisi untuk sudut ini!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }
    
    cout << "Hasil: " << result << endl;
    
    return 0;
}