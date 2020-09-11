#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int flag = 0;
    for(int i = 0; i < s.length(); i++){
        if( ((s[i] == '4') || (s[i] == '7')) ){
            flag += 1;
        }
    }

    if(flag == 4 || flag == 7){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
