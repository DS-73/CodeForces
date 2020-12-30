#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int a, b;       cin >> a >> b;
    if(a == 1 || a == 2){
        cout << 1 << endl;
        return;
    }
    a -=2;
    int res = a / b + 1;
    if(a % b){
        res += 1;
    }
    cout << res << endl;

}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}