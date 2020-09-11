#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    int64_t total_sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        total_sum += v[i];
    }
    sort(v.begin(), v.end());

    int64_t max_sum = 0, max_k = -1, temp = 0;
    for(int i = 0; i < n; i++){
        temp = v[i];
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j]){
                temp += v[j];
            }
            else{
                i = j - 1;
                break;
            }
        }
        if(temp > max_sum){
            max_sum = temp;
            max_k = v[i];
        }
    }
    cout << max_sum << " : " << max_k << " : " << total_sum;

    return 0;
}
