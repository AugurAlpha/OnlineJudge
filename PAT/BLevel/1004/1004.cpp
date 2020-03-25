// 1004 成绩排名
// auguralpha
// 2019-02-11
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
string maxs[] = {" ", " "};
string mins[] = {" ", " "};
int maxn = -1;
int minn = 100;


int main() {
    int n;
    cin >> n;
    while(n--) {
        string name, id;
        int num;
        cin >> name >> id >> num;
        if(num > maxn) {
            maxs[0] = name;
            maxs[1] = id;
            maxn = num;
        }
        if(num < minn) {
            mins[0] = name;
            mins[1] = id;
            minn = num;
        }
    }

    cout << maxs[0] << " " << maxs[1] << endl;
    cout << mins[0] << " " << mins[1] << endl;
    return 0;
}
