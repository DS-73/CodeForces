#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main(){
    short n;    cin >> n;
    vector<int> v(n);
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > max){
            max = v[i];
        }
    }

    long long count = 0;
    for(int i = 0; i < n; i++){
        count += max - v[i];
    }
    cout << count;
    
    return 0;
}
