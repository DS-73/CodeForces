#include <iostream>
#include <algorithm>

using namespace std;

int64_t func1(int a, int b, int c){
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    sort(arr, arr +3);
    int64_t res = (arr[0] + arr[1]) * arr[2], temp = arr[0] * arr[1] * arr[2];
    if(arr[0] == 1 && arr[1] == 1 && arr[2] == 1){
        res = 3;
    }
    else if(temp > res){
        res = temp;
    }

    return res;
}

int64_t func2(int a, int b, int c){
    int64_t res = (a + b + c);
    
    if( ( (a + b) * c) > res ){
        res = ((a + b) * c);
    }
    if( ( a * (b + c) ) > res ){
        res = ( a * (b + c) );
    }
    if( ( (a + c) * b) > res ){
        res = ( (a + c) * b);
    }
    if( (a*b*c) > res ){
        res = (a*b*c);
    }

    return res;
}


int main(){
    int a, b, c;
    int64_t count = 0;
    while(++count){
        a = rand() % 10 +1;
        b = rand() % 10 +1;
        c = rand() % 10 +1;

        int64_t res1 = func1(a, b, c);
        int64_t res2 = func2(a, b, c);
        
        if(res1 == res2){
            cout << endl << "Attempt Successful << " << count << "  >> ";
        }

        else{
            cout << endl << "Attempt Unsuccessful << " << count << "  >> ";
            cout << endl << "RES1 : " << res1 << "  RES2 : " << res2;
            cout << endl << a << b << c;
            return 0;
        }
    }

    return 0;
}