// 1023 组个最小数
// auguralpha
// 2019-02-25

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 15;
vector<int> arr;
int n[maxn];

int main() {
    for(int i = 0; i < 10; ++ i) {
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < 10; ++ i) {
        if(n[i] != 0) {
            while(n[i] --) {
                arr.push_back(i);
            }
        }
    }

    sort(arr.begin(), arr.end());
    int cnt = 0;
    bool mark = false;
    for(int i = 0; i < arr.size(); ++ i) {
        if(arr[i] == 0) {
            ++ cnt;
            mark = true;
        }
        else {
            printf("%d", arr[i]);
            if(cnt != 0 && mark) {
                while(cnt --) {
                    printf("%d", 0);
                }
                mark = false;
            }
        }
    }
    puts("");
    return 0;
}
