// 1021 个位数统计
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int ans[10];


int main() {
    string n;
    cin >> n;
    memset(ans, 0, sizeof(ans));
    for(int i = 0; i < int(n.size()); ++ i) {
        ++ ans[n[i] - '0'];
    }
    for(int i = 0; i < 10; ++ i) {
        if(ans[i] != 0) {
            cout << i << ":" << ans[i] << endl;
        }
    }
    return 0;
}
