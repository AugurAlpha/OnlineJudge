// 1008 数组元素循环右移问题
// auguralpha
// 2019-02-11
#include <cstdio>
const int maxn = 110;
int arr[maxn];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    m = m % n;
    for(int i = 0; i < n; ++i) {
        printf("%d%s", arr[(n-m+i)%n], ((i - n + 1) ? " " : "\n"));
    }
    return 0;
}
