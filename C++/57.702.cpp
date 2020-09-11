#include <iostream>

using namespace std;

int main(){
    int n, countm = 0, countn = 0;  cin >> n;
    while(n--){
        int num1, num2;     cin >> num1 >> num2;
        if(num1 > num2){
            countm++;
        }
        else if(num1 > num2){
            countn++;
        }
    }
    if(countm == countn){
        cout << "Friendship is magic!^^";
    }
    else if(countm > countn){
        cout << "Mishka";
    }
    else{
        cout << "Chris";
    }

    return 0;
}
