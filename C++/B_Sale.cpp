#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void solve(vector<int> &v, int m){
    sort(v.begin(), v.end());
    int Max = 0;
    for(int i = 0; i < m; ++i){
        if(v[i] >= 0){
           break;
        }
        Max += v[i];
    }
    cout << abs(Max);
}

int main(){
    int n, m;       cin >> n >> m;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    solve(v, m);

    return 0;
}
