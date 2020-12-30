#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int64_t n, a, b;
    cin >> n >> a >> b;

    int64_t n1 = a * n;
    int64_t n2 = b * (n/2);
    //cout << n1 << " : " << n2 << endl;
    if(n % 2 == 1){
        n2 += a;
    }

    //cout << n1 << " : " << n2 << endl;
    cout << min(n1, n2) << endl;
}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}