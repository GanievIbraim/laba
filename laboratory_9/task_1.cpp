#include <iostream>
using namespace std;
int main(){
    char ch; 
    int sum = 0;

    cout << " Enter the sequence of symbols: \n";
    do
    {
        cout << " Your symbols - "; 
        cin >> ch;

        if (ch != '.'){
            cout << " Result - " << (int)ch << "\n\n"; 
            sum ++;
        };

    } while(ch != '.');
    cout << "\n The program is completed \n";
    cout << " Number of characters - " << sum;
    cin.get(); 
    return 0;
}