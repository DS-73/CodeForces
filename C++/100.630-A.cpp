#include <iostream>

using namespace std;

void solve(int64_t a, int64_t n){
    int res = 5;
    while(n){
        if(n & 1){
            res = res * a % 100;
        }
        a = a * a % 10;
        n = n >> 1; 
    }
    cout << res;
}

int main(){
    int64_t n;      cin >> n;
    solve(5, n);

    return 0;
}
