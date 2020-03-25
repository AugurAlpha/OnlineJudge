// 1005 继续(3n+1)猜想
// auguralpha
// 2019-02-11
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn = 110;
bool mark[maxn];
vector<int> ans;
int n[maxn];

void presence(int m, int k);
bool three_n(int m, int k);
bool cmp(int a, int b);

int main() {
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; ++i) {
        scanf("%d", &n[i]);
    }
    memset(mark, true, sizeof(mark));
    for(int i = 0; i < k; ++i) {
        three_n(n[i], k);
    }

    for(int i = 0; i < k; ++i) {
        if(mark[i]) {
            ans.push_back(n[i]);
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    for(int i = 0; i < ans.size(); ++i) {
        if(i == ans.size() - 1) {
            cout << ans[i] << endl;
        }
        else {
            cout << ans[i] << " ";
        }
    }

    return 0;
}

bool three_n(int m, int k) {
    while(m != 1) {
        if(m % 2 == 0) {
            m /= 2;
        }
        else {
            m = (m * 3 + 1) / 2;
        }

        presence(m, k);
    }
    return true;
}

void presence(int m, int k) {
    for(int i = 0; i < k; ++i) {
        if(m == n[i]) {
            mark[i] = false;
            return;
        }
    }
}

bool cmp(int a, int b) {
    return a > b;
}
