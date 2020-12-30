#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void solve(){
    int n, m, count;       cin >> n >> m;
    map<int, int> mp;

    for(int i = 0; i < n + m; ++i){
        cin >> count;
        ++mp[count];
    }
    count = 0;
    for(auto it : mp){
        if(it.second > 1){
            ++count;
        }
    }
    cout << count << endl;
}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}