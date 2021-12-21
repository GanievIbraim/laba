#include <iostream>
using namespace std;

int main(){
    int i, n = 1;

    while(n < 6){
        for (i = 6 - n; i > 0; i--){
            cout << n << "    ";
        };
        n++;
        cout << "\n";
    };
    cin.get(); 
    return 0;
}