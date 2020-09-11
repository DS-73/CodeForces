#include <iostream>
#include <string>


using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--){
        for(int i = 1; i < n; i++){
            if(s[i] == 'G' && s[i - 1] == 'B'){
                char ch = s[i-1];
                s[i-1] = s[i];
                s[i] = ch;
                i++;
            }
        }
    }

    cout << s;

    return 0;
}
