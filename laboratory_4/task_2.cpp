#include <iostream>
using namespace std;

int main(){
    float a, b; 
    char s; 
    cout << "a = ";
    cin >> a; 
    cout << "b = ";
    cin >> b;
    cout << "plus or minus: ";
    cin >> s; 
    if (s == '-') cout << a << " - " << b << " = " << a - b; 
    else if (s == '+') cout << a << " + " << b << " = " << a + b; 
    else cout << "Invalid value" << "\n";
    cin. get(); 
    return 0;
}