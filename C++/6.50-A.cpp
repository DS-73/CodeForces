#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    if(m == 1 && n == 1){
        cout << 0;
    }
    else if(m % 2 == 0 && n % 2 == 0){
        int res = (n/2) * m;
        cout << res;
    }
    else if(m % 2 == 0 && n % 2 == 1){
        int res = (m/2) * n;
        cout << res;
    }
    else if(m % 2 == 1 && n % 2 == 0){
        int res = (n/2) * m;
        cout << res;
    }
    else if(m % 2 == 1 && n % 2 == 1){
        int res = (m)/2 * n;
        res = res + (n/2);
        cout << res;
    }

    return 0;
}