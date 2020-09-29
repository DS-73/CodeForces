#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int zero_counter = 0, sum = 0;
    for(int i = 0; i < n; ++i){
        if(v[i] == 0){
            ++zero_counter;
        }
        sum += v[i];
    }
    sum += zero_counter;
    if(sum == 0){
        ++zero_counter;
    }

    cout << zero_counter << endl;
}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
