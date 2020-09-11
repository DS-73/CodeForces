#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int64_t n)
{
    int skip = 0;
    if(n < 2)
        return false;
    else if(n == 2)
        return true;
    
    int64_t limit = sqrt(n);
    if(n % 2 == 0)
        return false;
    
    for(int j = 3; j <= limit; j += 2){
        if(n % j == 0)
            return false;
    }
    return true;
}
int main()
{
    int64_t num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        int64_t sqr=sqrt(num);
        if(sqr*sqr==num&&isPrime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}