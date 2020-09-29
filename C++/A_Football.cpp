#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;
    string s;       cin.get();
 
    map<string, int> mp;
    for(int i = 0; i < n; ++i){
        cin >> s;
        ++mp[s];
    }

    int Max = 0;
    for(auto& it : mp){
        if(max(it.second, Max) == it.second){
            s = it.first;
            Max = it.second;
        }
    }
    cout << s;

}


int main(){

    solve();

    return 0;
}
