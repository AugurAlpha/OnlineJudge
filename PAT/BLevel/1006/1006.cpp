// 1006 换个格式输出整数
// auguralpha
// 2019-02-11
#include <cstdio>


int main() {
    int k;
    scanf("%d", &k);
    int n[3];
    for(int i = 0; i < 3; ++i) {
        n[i] = k % 10;
        k /= 10;
    }
    for(int i = 1; i <= n[2]; ++i) {
        printf("B");
    }
    for(int i = 1; i <= n[1]; ++i) {
        printf("S");
    }
    for(int i = 1; i <= n[0]; ++i) {
        printf("%d", i);
    }
    puts("");
    return 0;
}
