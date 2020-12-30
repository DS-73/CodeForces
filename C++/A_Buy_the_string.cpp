#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    vector<int> v(4);
    for(int i = 0; i < 4; ++i){
        cin >> v[i];
    }cin.get();

    string s;       cin >> s;
    int count = 0, count1 = 0, count0 = 0;
    for(int i = 0; i < v[0]; ++i){
        if(s[i] == '1'){
            count += v[2];
            ++count1;
        }
        else{
            count += v[1];
            ++count0;
        }
    }
    int res1 = (v[0] * v[1]) + (v[3] * count1);
    int res2 = (v[0] * v[2]) + (v[3] * count0);

    cout << min (count, min(res1, res2)) << endl;
}


int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}