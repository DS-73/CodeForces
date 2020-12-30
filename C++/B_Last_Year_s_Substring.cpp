#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;       cin.get();
    string s, key = "0202";       cin >> s;
    bool flag = false;

    int i = n - 1, it = 0;
    while(it < 4){
        if(s[i] == key[it]){
            ++it;
            --i;
        }
        else{
            break;
        }
    }

    i = 3 - it;
    while(i > -1){
        if(s[i] == key[it]){
            ++it;
            --i;
        }
        else{
            break;
        }
    }

    if(it == 4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){

    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
