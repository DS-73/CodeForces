#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(4);
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }

    int64_t count = 0;
    string s;       cin >> s;
    for(int i = 0; i < s.length(); i++){
        int temp = s[i] - 49;
        count += v[temp];
    }
    cout << count;

    return 0;
}
