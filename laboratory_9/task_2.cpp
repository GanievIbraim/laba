#include <iostream>
using namespace std;

int main(){
    
    int val, s = 0;
    cout << " Enter the sequence of numbers\n ";
    while (s <= 100){
        cout << " Enter numbers: ";
        cin >> val;
        cout << " ";
        s = s + (val * val);
    };
    cout << s;
    cin.get(); 
    return 0;
}