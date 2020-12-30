#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int a, b, c;        cin >> a >> b >> c;
    cout << max(a, max(b, c)) + 1 << endl;

}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}