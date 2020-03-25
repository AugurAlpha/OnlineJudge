// 1022 D进制的A+B
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> ans;

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    int c = a + b;
    if(c == 0) {
        ans.push_back(0);
    }
    while(c != 0) {
        int tmp = c % d;
        ans.push_back(tmp);
        c /= d;
    }
    for(int i = int(ans.size()) - 1; i >= 0; -- i) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
