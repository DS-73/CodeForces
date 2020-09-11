#include <iostream>

using namespace std;

int main(){
    int t;     cin >> t;
    while(t--){
        string s;   cin >> s;
        int len = s.length();
        
        cout << s[0];
        for(int i = 1; i < len; i += 2){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
