// 1001 害死人不偿命的(3n+1)猜想
// auguralpha
// 2019-02-11
#include <cstdio>


int main() {
    int n;
    int ans = 0;
    scanf("%d", &n);
    while(n != 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (n * 3 + 1) / 2;
        }
        ++ ans;
    }
    printf("%d\n", ans);
    return 0;
}
