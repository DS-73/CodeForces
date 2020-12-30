#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;      cin >> n;
    vector<int> v(n), v1;
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    
    set<int> s;
    for(int i = v.size() - 1; i > -1; --i){
        if(s.find(v[i]) == s.end()){
            s.insert(v[i]);
            v1.push_back(v[i]);
        }
    }

    cout << v1.size() << endl;
    for(int i = v1.size() - 1; i > -1; --i){
        cout << v1[i] << " ";
    }

    return 0;
}