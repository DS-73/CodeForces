#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    long long int t;
    cin >> t;

    string prev = "\0";
    long long int count = 0;

    while(t--){
        string s;
        cin >> s;

        if(prev == "\0") {
            count++;
        }  
        else if( !(prev.compare(s))){
            count++;
        }
        prev = s;
   
    }

    cout << count;

    return 0;
}
