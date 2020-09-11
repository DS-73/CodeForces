#include <iostream>

using namespace std;

int main(){
    long long a, b, years = 0;
    cin >> a >> b;

    while(a <= b){
        a = a * 3;
        b = b * 2;
        years++;
    }
    cout << years;

    return 0;
}
