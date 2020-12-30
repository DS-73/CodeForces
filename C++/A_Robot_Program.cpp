#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
    int x, y;       cin >> x >> y;
    if(x == y){
        cout << x + y << endl;
    }
    else{
        int temp = max(x, y);
        cout << temp + (temp - 1) << endl;
    }
}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}