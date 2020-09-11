#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int i = 0, j = s2.length() - 1, flag = 0;
    while( (i < s1.length()) || (j > -1)){
        if(s1[i++] != s2[j--]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }


    return 0;
}
