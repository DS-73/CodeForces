#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    vector<int64_t> v(3), temp(3);
    for(int i = 0; i < 3; i++){
        int64_t num;        cin >> num;
        v[i] = num;
        temp[i] = num;
    }
    sort(temp.begin(), temp.end());
    if(temp[2] != temp[1]){
        cout << "NO" << endl;
        return;
    }
    if(v[0] < v[1]){
        cout << "YES" << endl;
        cout << v[0] << " " << v[0] << " " << v[1] << endl;
    }
    else if(v[0] > v[1]){
        cout << "YES" << endl;
        cout << v[1] << " " << v[0] << " " << v[1] << endl;
    }
    else if(v[1] > v[2]){
        cout << "YES" << endl;
        cout << v[1] << " " << v[2] << " " << v[2] << endl;
    }

}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
