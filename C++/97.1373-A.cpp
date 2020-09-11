#include <iostream>

using namespace std;

void solve(){
    string s;       cin >> s;
    int counter = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 1){
            counter++;
        }
    }
    if(counter > s.length() - counter){
        counter = s.length() - counter;
    }

    if(counter % 2 == 0){
        cout << "NET" << endl;
    }
    cout << "DA" << endl;
}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
