#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    double num;
    cout << "Введите произвольное число: ";
    cin >> num;
    if (num < 10){
        cout << "Это число меньше 10." << endl;
    }
    else if (num == 10){
        cout << "Это число равно 10." << endl;
    }
    else{
        cout << "Это число больше 10." << endl;
    }
    cin.get(); 
    return 0;
}