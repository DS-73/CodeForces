#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long int binpow(long long int a, long long int n){
    long long int res = 1;
    while(n > 0){
        if(n & 1){
            res = res * a;
        }
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main(){
    int t;  cin >> t;
    vector<long long int> v(30);
    for(int i = 0; i < 30; i++){
        v[i] = binpow(2, i+1);
    }

    while(t--){
        int n, i = 0;  cin >> n;
        int temp = n/2;
        
        long long int sum1 = 0, sum2 = 0;
        
        while(i < temp -1){
            sum1 += v[i];
            i++;
        }
        sum1 = v[n - 1];

        while(i < n - 1){
            sum2 += v[i];
            i++;
        }

        cout << sum1 - sum2 << endl;
    }

    return 0;
}