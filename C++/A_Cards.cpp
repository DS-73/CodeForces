#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;
    string s;       cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.length(); ++i){
        ++mp[s[i]];
    }
    for(int i = 0; i < mp['n']; ++i){
        cout << "1 ";
    }
    for(int i = 0; i < mp['z'] - 1; ++i){
        cout << "0 ";
    }
    if(mp['z']){
        cout << "0";
    }
}


int main(){

    solve();

    return 0;
}
