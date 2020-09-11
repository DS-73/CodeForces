#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair<int, int> A, pair<int, int> B){
    return A.first < B.first;
}

void solve(){
    int n;      cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), comp);

    int Max = v[0].second;
    for(int i = 0; i < n; i++){
        Max = max(v[i].second, Max);
        if(Max != v[i].second){
            cout << "Happy Alex";
            return;
        }
    }
    cout << "Poor Alex";

}

int main(){
    solve();
    return 0;
}
