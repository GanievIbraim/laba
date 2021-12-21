#include <iostream>
using namespace std;

int main(){
    int sum = 0, mult = 1, num;

    cout << " Enter the sequence of numbers\n";

    while(true){
        cout << " Enter number: ";
        cin >> num; 
        if (num == 0) break;
        if ((num > 10) && (num < 25)) sum += num;
        if (num > 15) mult *= num;
    };
    cout << " Sum: " << sum << "\n";
    cout << " Mult: " << mult << "\n";
    cin.get(); 
    return 0;
}