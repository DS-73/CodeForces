#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int64_t res = (a + b + c);
    
    if( ( (a + b) * c) > res ){
        res = ((a + b) * c);
    }
   
    if( ( a * (b + c) ) > res ){
        res = ( a * (b + c) );
    }
   
    if( (a + (b * c)) > res){
        res = (a + (b * c));
    }
    
    if( ((a * b) + c) > res){
        res = ((a * b) + c);
    }
   
    if( (a*b*c) > res ){
        res = (a*b*c);
    }
    

    cout << res;
    return 0;
}
