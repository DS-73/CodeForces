
#include <iostream>

using namespace std;

int main(){
    int n, res = -1, ab = 0;
    cin >> n;

    while(n--){
        int ai, bi, temp;
        cin >> ai >> bi;

        if(res == -1){
            if(ai > bi){
                res = ai;
            }
            else{
                res = bi;
            }
        }

        temp = ab + bi - ai;
        ab = temp;

        if(temp > res){
            res = temp;
        }
        
    }
    cout << res;

    return 0;
}
