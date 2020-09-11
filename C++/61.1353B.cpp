#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    short t;       cin >> t;
    while(t--){
        short n, k;     cin >> n >> k;
        
        vector<int> v1(n),v2(n);
        for(int i = 0; i < n; i++){
            cin >> v1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> v2[i];
        }

    // Sorting Vectors
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());

        int i = 0;
        while(i < k){
            if(v1[n - 1 -i] < v2[i]){
                v1[n - 1 -i] += v2[i];
                v2[i] = v1[n - 1 -i] - v2[i];
                v1[n - 1 -i] = v1[n - 1 -i] - v2[i];
            }
            i++;
        }   

     // Sum
        int64_t sum = 0;
        for(int i = 0; i < n; i++){
            sum += v1[i];
        }
        cout << sum << endl;

    }
    return 0;
}

