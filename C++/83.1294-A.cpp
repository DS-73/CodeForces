#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;          cin >> t;
    while(t--){
        int64_t res = 0;
        vector<int64_t> v(4);
        for(int i = 0; i < 4; i++){
            cin >> v[i];
            res += v[i];
        }
        
        sort(v.begin(), v.end() - 1);
        if((res == ((res / 3) * 3)) && ((res / 3) >= v[2])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}
