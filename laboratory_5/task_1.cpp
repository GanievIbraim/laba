#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    double num1, num2; 
    string press_0; 
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "1. The result is: " << (-num1 + sqrt(pow(num1, 2) + 3 * num2)) / (2 * num2) << "\n"; 
    cout << "2. The result is: " << (sqrt((3 + num1 * num2) / (4 * pow(num1, 2)) )) << "\n";
    cout << "3. The result is: " << (6 - abs(num1 - 3 * num2)) / (sqrt( (5 - pow(num2, 2) ))) << "\n";
    cout << "4. The result is: " << (exp(num1 + 7) * sqrt(37 * num2 - pow(num1, 3))) << "\n"; 
    cout << "5. The result is: " << sin(num1) + (pow(num2, 2) / (cos(2*num1) + 23)) << "\n";
    cout << "6. The result is: " << tan(num2) - (abs(num1 - (3 * num2) + (2 / sqrt(num2 + 4)))) << "\n";
    cout << "Press 0 to exit ";
    cin >> press_0;
    if (press_0 == "0") cout << "\n";

    cin. get(); 
    return 0;
}