#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, x;       cin >> n >> x;
    vector<int> v1(n), v2(n);
    for(int i = 0; i < n; ++i){
        cin >> v1[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    for(int i = 0; i < n; ++i){
        if(v1[i] + v2[i] > x){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}