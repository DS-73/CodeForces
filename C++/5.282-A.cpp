#include <iostream>
#include <string>

using namespace std;

int main(){
    int res = 0, n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        std::string::iterator it = s.begin() + 1;
        if(*it == '+'){
            res++;
        }
        else{
            res--;
        }
    }
    cout << res;
    return 0;
}