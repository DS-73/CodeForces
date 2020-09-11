#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n, temp_n;
    cin >> n;
 
    vector<int> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    temp_n = n;
    int count = 0;

    vector<int> v1;
    while(n >= v[0]){
        v1.push_back(n);
        n = n - v[0];
    }
    if(n == 0){
        cout << v1.size();
    }
    else{
        int count = v1.size();
        for(int i = v1.size() - 1; i > -1; i--){
            if( ((v1[i] % v[1]) % v[2]) == 0){
                count += ((v1[i] / v[1]) / v[2]);
                cout << count << endl;
                return 0;
            }
            else if( ((v1[i] % v[2]) % v[1]) == 0){
                count += ((v1[i] / v[2]) / v[1]);
                cout << count << endl;
                return 0;
            }
        }
    }

    return 0;
}