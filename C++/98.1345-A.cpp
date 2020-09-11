#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        
        int64_t count = 0;
        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            count += v[i];
        }

        if(count % n == 0){
            cout << count / n << endl;
        }
        else{
            count = (count - (count % n)) / n;
            cout << ++count << endl;
        }
    }
    return 0;
}
