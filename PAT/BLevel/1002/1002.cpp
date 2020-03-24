// 1002 写出这个数
// auguralpha
// 2019-02-11
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
const int maxn = 10;
string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int ans[maxn];

int main() {
    string n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n.size(); ++i) {
        cnt += n[i] - '0';
    }
    int m = 0;
    while(cnt != 0) {
        ans[m++] = cnt % 10;
        cnt /= 10;
    }
    for(int i = m-1; i >= 0; --i) {
        if(i != 0) {
            cout << str[ans[i]] << " ";
        }
        else {
            cout << str[ans[i]] << endl;
        }
    }
    return 0;
}
