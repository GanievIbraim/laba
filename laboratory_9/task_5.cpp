#include <iostream>
using namespace std;

int main(){
    int hours, min, sec, sum; 
    while (true){
        cout << "\n Enter value \n";
        cout << " Hours: ";
        cin >> hours;
        if ((hours <= 0) || (hours >= 24)) continue;
        cout << " Minutes: ";
        cin >> min;
        if ((min <= 0) || (min >= 59)) continue;
        cout << " Seconds: "; cin >> sec;
        if ((sec <= 0) || (sec >= 59)) continue;
        cout << " Result: " << (hours * 3600) + (min * 60) + sec << " seconds.";
        break;
    };

    return 0;
}