#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void solve(){
    int n, temp;      cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        ++mp[temp];
    }

    int maxPockets = 0;
    for(auto& it : mp){
        maxPockets = max(maxPockets, it.second);
    }
    cout << maxPockets;

}


int main(){

    solve();

    return 0;
}
