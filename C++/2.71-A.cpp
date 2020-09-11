
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(--n){
        string s;
        cin >> s;

        if(s.length() > 10){
            auto it = s.begin(), it2 = s.end() - 1;
            cout << *it << s.length() - 2 << *it2 << endl;
        }
        else {
            cout << s << endl;
        }
            
    }
    return 0;
}