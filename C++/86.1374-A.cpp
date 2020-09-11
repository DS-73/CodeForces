#include <iostream>

using namespace std;

void solve(){
    int64_t a, b, c;
    cin >> a >> b >> c;

    for(int i = c; i > -1; i--){
        if(i % a == b){
            cout << i << endl;
            return;
        }
    }
}

int main(){
    int t;         cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
