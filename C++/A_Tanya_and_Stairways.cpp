#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;      cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int count = 1;
    vector<int> c;
    for(int i = 1; i < n; ++i){
        if(v[i] == 1){
            c.push_back(count);
            count = 1;
        }
        else{
            ++count;
        }
    }
    if(count != 1 || v[n-1] == 1){
        c.push_back(count);
    }
    
    cout << c.size() << endl;
    for(int i = 0; i < c.size(); ++i){
        cout << c[i] << " ";
    }
    
    return 0;
}