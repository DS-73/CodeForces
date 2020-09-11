#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;      cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    vector<int> count{0, 0, 0};
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            count[0]++;
        }
        else if(v[i] == 2){
            count[1]++;
        }
        else if(v[i] == 3){
            count[2]++;
        }
    }sort(count.begin(),count.end());
    
    int res = count[0];
    vector<int> v1, v2, v3;
    for(int i = 0; i < n; i++){
        if((v[i] == 1) && v1.size() != res){
            v1.push_back(i+1);
        }
        else if((v[i] == 2) && v2.size() != res){
            v2.push_back(i+1);
        }
        else if((v[i] == 3) && v3.size() != res){
            v3.push_back(i+1);
        }
    }

    cout << res << endl;
    for(int i = 0; i < res; i++){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
    

    return 0;
}
