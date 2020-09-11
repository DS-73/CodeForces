#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 = "hello", s2;
    cin >> s2;

    int it = 0;
    for(int i = 0; i < s2.length(); i++){
        if(s1[it]== s2[i]){
            it++;
            if(it == 5){
                break;
            }
        }
    }

    if( it == 5){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}
