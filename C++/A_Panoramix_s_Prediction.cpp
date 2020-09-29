#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void solve(){
    int n, m, j, flag;       cin >> n >> m;
    for(int i = n + 1; i <= m; ++i){
        flag = 0;
        for(j = 2; j <= sqrt(i) + 1; ++j){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            j = i;
            break;
        }
    }
    if(j == m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}


int main(){

    solve();

    return 0;
}
