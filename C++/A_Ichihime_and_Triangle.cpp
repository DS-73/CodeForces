#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(vector<int> &v){
    cout << v[1] << " " << v[2] << " " << v[2] << endl;
}


int main(){

    int t;		cin >> t;
    vector<int> v(4);
    while(t--){
        for(int i = 0; i < 4; ++i){
            cin >> v[i];
        }
        solve(v);
    }

    return 0;
}
