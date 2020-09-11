#include <iostream>
#include <set>

using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> s1;
    int i = 1, temp = i * k;
    while(temp <= d){
        s1.insert(temp);
        i++;
        temp = i * k;
    }
    
    i = 1, temp = i * l;
    while(temp <= d){
        s1.insert(temp);
        i++;
        temp = i * l;
    }
    
    i = 1, temp = i * m;
    while(temp <= d){
        s1.insert(temp);
        i++;
        temp = i * m;
    }

    i = 1, temp = i * n;
    while(temp <= d){
        s1.insert(temp);
        i++;
        temp = i * n;
    }
    

    cout << s1.size();

    return 0;
}
