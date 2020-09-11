#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int temp = n;
    while(++temp){
        int a = temp % 10;
        int b = ((temp % 100) - a) / 10;
        int c = ((temp % 1000) - b - a) / 100;
        int d = ((temp % 10000) - a - b - c) / 1000;
        
        if( (a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)){
            cout << temp;
            break;
        }

    }

    return 0;
}
