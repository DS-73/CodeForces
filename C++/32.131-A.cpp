#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;

    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    
    cout << s;

    return 0;
}
