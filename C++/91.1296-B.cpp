#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t num, res = 0, temp;
        cin >> num;
        while(num != 0){
            if(num < 10){
                res += num;
                num = 0;
            }
            else{
                temp = (num - (num % 10));
                res += temp;
                num  = num - temp + temp / 10;
                //cout << res << " : " << temp << " : " << num << endl;
            }
        }
        cout << res << endl;
    }


    return 0;
}

