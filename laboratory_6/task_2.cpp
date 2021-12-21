#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, p;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    p = (a + b + c) / 2;
    cout << "the result is: " << sqrt(p * (p - a) * (p - b) * (p - c));
    cin.get(); 
    return 0;
}