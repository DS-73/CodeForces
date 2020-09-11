#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, m;        cin >> n >> m;
    vector<int> v1(n), v2(m);
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.begin());
    sort(v2.begin(), v2.end());
    int count = 0;
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            if(v1[i] == v2[j]){
                cout << "YES" << endl;
                cout << 1 << " " << v1[i] << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
