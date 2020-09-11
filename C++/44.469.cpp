#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> res;
    
    int p;
    cin >> p;
    while(p--){
        int num;
        cin >> num;
        res.insert(num);
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        res.insert(num);
    }

    if(res.size() < n){
        cout << "Oh, my keyboard!";
    }
    else{
        cout << "I become the guy.";
    }

    return 0;
}
