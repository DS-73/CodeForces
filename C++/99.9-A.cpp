#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, res;       cin >> a >> b;
    res = 6 - max(a, b) + 1;

    int flag = 0;
    for(int i = 6; i > 1; i--){
        if(res % i == 0 && 6 % i == 0){
            cout << res / i <<  "/" << 6 / i;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << res << "/" << 6 ;
    }

    return 0;
}