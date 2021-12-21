#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(0, "");
    double num1, num2;
    char sign;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите знак для вычислений: ";
    cin >> sign; cout << "Введите второе число: ";
    cin >> num2;
    switch (sign){
        case '+':{
            cout << "Результат: " << num1 << " " << sign << " " << num2 << " = " << num1 + num2;
            break;
        }
        case '-':{
            cout << "Результат: " << num1 << " " << sign << " " << num2 << " = " << num1 - num2;
            break;
        }
        case '*':{
            cout << "Результат: " << num1 << " " << sign << " " << num2 << " = " << num1 * num2;
            break;
        }
        case '/':{
            if (num2 != 0) cout << "Результат: "<< num1 << " " << sign << " " << num2 << " = " << num1 / num2;
            else{
                cout << "На ноль делить нельзя!";
            }
            break;
        }
        default:{
            cout << "Ошибка: неверный символ!";
        }
}
    cin.get(); 
    return 0;
}