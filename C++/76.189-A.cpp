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
 
    int count = 0;
    temp_n = n;
    count = n / v[0];
    n = n % v[0];
 
    if((n != 0) && (v[1] % v[0] == n)){
        count -= (v[1] / v[0]); 
        count++;
        n = 0;
    }
    if((n != 0) && (v[2] % v[0] == n)){
        count -= (v[2] / v[0]); 
        count++;
        n = 0;
    }
    if(n != 0){
        count = 0;
        if(temp_n % v[1] == 0){
            count = temp_n / v[1];
        }
        if((temp_n % v[2] == 0) && (temp_n / v[2] > count)){
            count = temp_n / v[2];
        }
    }
    if(count == 0){
        n = temp_n;
        count = n / v[1];
        n = n % v[1];

        if((n != 0)){
            count += (n / v[0]); 
            n = n % v[0];
        }
        if((n != 0)){
            count += (n / v[2]); 
            n = n % v[2];
        }
    
    }
    if(n != 0){
        n = temp_n;
        count = n / v[2];
        n = n % v[2];

        if((n != 0)){
            count += (n / v[0]); 
            n = n  % v[0];
        }
        if((n != 0)){
            count += (n / v[1]); 
            n = n % v[1];
        }
    }
    if(n != 0){
        n = temp_n;
        count = n / v[2];
        n = n % v[2];

        if((n != 0)){
            count += (n / v[1]); 
            n = n % v[1];
        }
        if((n != 0)){
            count += (n / v[0]); 
            n = n % v[0];
        }
        
    }
    
    
    cout << count;
    return 0;
}