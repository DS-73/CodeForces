#include <iostream>
#include <string>

using namespace std;

int main(){
    string str, temp;
    cin >> str;

    int flag = 0;
    for(int i = 0; i < str.length(); i++){
        if((str[i] == 'W') && (str[i + 1] =='U') && ((i + 2 < str.length()) && (str[i + 2] =='B'))){
            if(flag == 1){
                temp.push_back(' ');
                flag = 0;
            }
            i += 2;
        }
        else{
            temp.push_back(str[i]);
            flag = 1;
        }
    }
    while(temp[temp.length() - 1] == ' '){
        temp.pop_back();
    }
    cout << temp;
    return 0;
}
