#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string s, temp;
    int j = 0;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if( !( (s[i] == 'A') || (s[i] == 'O') || (s[i] == 'Y') || (s[i] == 'E') || (s[i] == 'U') || (s[i] == 'I') || (s[i] == 'a') || (s[i] == 'o') || (s[i] == 'y') || (s[i] == 'e') || (s[i] == 'u') || (s[i] == 'i') ) ){
            char ch = tolower(s[i]);
            temp[j++] = '.';
            temp[j++] = ch;
        }
    }
    
    for(int i = 0; i < j; i++){
        cout << temp[i];
    }

    return 0;
}