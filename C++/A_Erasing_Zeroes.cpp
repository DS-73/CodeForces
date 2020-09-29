#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    string s;       cin >> s;
    int counter = 0, temp = 0, min = -1;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '1'){
            if(min == -1){
              temp = 0;
            }
            counter += temp;
            min = i;   
            temp = 0; 
        }
        else{
            ++temp;
        }
    }
    cout << counter << endl;

}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
