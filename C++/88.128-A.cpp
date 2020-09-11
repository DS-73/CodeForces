#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int64_t n;      cin >> n;
    
    cin.get();
    string s;       getline(cin, s); 
    
    map<char, int64_t> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }

    int64_t res = 0;
    for(auto& it : mp){
        res += it.second;
    }
    cout << res + 1;

    return 0;
}
