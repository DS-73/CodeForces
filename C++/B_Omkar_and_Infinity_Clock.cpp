#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve(){
    int64_t n, k;       cin >> n >> k;
    vector<int64_t> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
 
    int x = *(max_element(v.begin(), v.end()));
 
    for(int i = 0; i < n; ++i){
        v[i] = x - v[i];
    }
 
    x = *(max_element(v.begin(), v.end()));    
    if(k % 2 == 0){    
        for(int i = 0; i < n; ++i){
            v[i] = x - v[i];
        }
    }
 
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }cout << endl;
 
}
 
 
int main(){
 
    int t;		cin >> t;
 
    while(t--){
        solve();
    }
 
    return 0;
}