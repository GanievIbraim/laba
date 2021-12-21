#include <iostream>
using namespace std;
int main(){
    int n, i, j, num = 1;
    double t, a ,f = 0;
    cout<<" Start programm \n";
    cout<<" Enter n: ";
    cin >> n;
    cout << " Enter t: ";
    cin >> t;
    for(i=0; i<=n; i++){
        cout << " Enter a: ";
        cin >> a;

        for (j = 0; j < n - i; j++) num = num * t;
        f = f + a * num;
        num = 1;
    }

    cout << " Result: F = " << f;
    cin.get(); 
    return 0;
}