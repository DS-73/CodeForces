#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int res = 0;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            res ++;
        }
    }

    cout << res;
    
    return 0;
}
