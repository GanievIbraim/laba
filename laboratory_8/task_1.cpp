#include <iostream>
using namespace std;
int main(){
    int j, s = 0;
    cout << "\n Start programm \n";
    for (int i = 2; ; i+= 2){
        cout << " Enter j: ";
        cin >> j; 
        if (j == 0) break;
        else s = s + (i * j);
    };
    cout << "Result: " << s;
    cin.get(); 
    return 0;
}