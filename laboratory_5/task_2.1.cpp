#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string str2; 
    char b, str[6]; 
    cout << "Exercise #2.1" << "\n";
    cout << "Enter string: ";
    cin >> str;
    b = str[0];
    str[0] = str[4];
    str[4] = str[2];
    str[2] = b;
    cout << "The result is: " << str << "\n";

    cin. get(); 
    return 0;
}