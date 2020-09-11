#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int t;  cin >> t;

    while(t--){
        int n, temp = n / 2;  cin >> n;
        
        vector<int64_t> v(n);
        v[0] = 2;
        for(int i = 0; i < n; i++){
            v[i] = pow(v[i - 1], 2);
        }
        for(int i = 0; i < n; i++){
            cout << v[i];
        }

    }

    return 0;
}
