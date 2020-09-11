#include <iostream>

using namespace std;

int main(){
    int dis, res = 0;
    cin >> dis;

    while(dis > 5){
        res = res + (dis / 5);
        dis = dis % 5;
    }

    while(dis > 4){
        res = res + (dis / 4);
        dis = dis % 4;
    }

    while(dis > 3){
        res = res + (dis / 3);
        dis = dis % 3;
    }

    while(dis > 2){
        res = res + (dis / 2);
        dis = dis % 2;
    }

    while(dis > 1){
        res = res + (dis / 1);
        dis = dis % 1;
    }

    cout << res;

    return 0;
}
