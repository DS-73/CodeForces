#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    v[0] = 5;
    for(int i = 1; i < n; i++){
        v[i] = v[i - 1] + ( (i + 1) * 5);
    }

    int max = 240 - k, i, flag = 0;
    for(i = 0; i < n; i++){
        if(max < v[i]){
            flag = 1;
            break;
        }
    }
    
    cout << i;

    return 0;
}
