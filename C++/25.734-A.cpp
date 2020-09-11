#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            count++;
        }
    }

    if(count > s.length()){
        for(int i = 0; i < s. length(); i++){
            s[i] = toupper(s[i]);
        }
    }
    
    else{
        for(int i = 0; i < s. length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s;


    return 0;
}

