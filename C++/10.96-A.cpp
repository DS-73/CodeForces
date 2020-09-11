#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int risk = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            risk++;
        }
        else{
            risk = 1;
        }

        if(risk == 7){
            cout << "YES";
            break;
        }
    }
    if(risk < 7){
        cout << "NO";
    }

    return 0;
}