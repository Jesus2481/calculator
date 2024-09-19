#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, %): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;


    /* switch (operation) {

     case '+':
         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
         break;

     case '-':
         cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
         break;

     case '*':
         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
         break;

     case '/':
         if (num2 == 0) {
             cout << "Деление на ноль невозможно!" << endl;
         }
         else {
             cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
         }
         break;

     case '%':
         cout << num1 << " % от " << num2 << " = " << (num1 / 100) * num2 << endl;
         break;
     default:
         cout << "Некорректная операция!" << endl;
     }*/

    return 0;
}