#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int odd_counter = 0, even_counter = 0;
    for(int i = 0; i < n; i++){
        if(v[i] & 1){
            odd_counter++;
        }
        else{
            even_counter++;
        }
    }

    if((odd_counter == 0) || ((odd_counter & 1 == 0) && (even_counter == 0))){
        cout << "NO" << endl;
    }
    else if((odd_counter % 2 == 0) && (even_counter == 0)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        solve();
    }
    return 0;   
}

