// 1010 一元多项式求导
// auguralpha
// 2019-02-11
#include <cstdio>

int main() {
    int a, b;
    bool mark = false;
    while(scanf("%d%d", &a, &b) != EOF) {
        if(b != 0) {
            printf("%s%d %d", (mark ? " " : ""), a * b, b - 1);
            mark = true;
        }
    }
    if(!mark) {
        puts("0 0");
    }
    else {
        puts("");
    }
    return 0;
}
