#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t a, b, temp, res = 0;
        temp = abs(a-b);

        if(temp % 10){
            res = 1;
        }
        cout << (temp / 10) + res << endl;

    }

    return 0;
}
