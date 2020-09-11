#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int64_t n, l;
    cin >> n >> l;

    vector<int64_t> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long double max = -1;

    for(int i = 1; i < n; i++){
        if((v[i] - v[i - 1]) / 2.0 > max){
            max = (v[i] - v[i - 1]) / 2.0;
        }
    }
    
    long double temp = v[0];
    if(temp > max){
        max = temp;
    }
    temp = (l - v[n - 1]);
    if( temp > max){
        max = temp;
    }

    cout << fixed << setprecision(10) << max;
    return 0;
}
