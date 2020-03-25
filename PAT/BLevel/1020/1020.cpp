// 1020 月饼
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int maxn = 1010;
struct MoonCakes{
    double num;
    double value;
    double sum;
}cakes[maxn];

bool cmp(MoonCakes a, MoonCakes b);


int main() {
    int n;
    double sum;
    double ans = 0;
    scanf("%d%lf", &n, &sum);
    for(int i = 0; i < n; ++ i) {
        scanf("%lf", &cakes[i].num);
    }
    for(int i = 0; i < n; ++ i) {
        scanf("%lf", &cakes[i].sum);
        cakes[i].value = cakes[i].sum / cakes[i].num;
    }
    sort(cakes, cakes+n, cmp);
    for(int i = 0; i < n; ++ i) {
        if(sum > cakes[i].num) {
            sum -= cakes[i].num;
            ans += cakes[i].sum;
        }
        else {
            ans += cakes[i].value * sum;
            break;
        }
    }
    printf("%.2f\n", ans);
    return 0;
}

bool cmp(MoonCakes a, MoonCakes b) {
    return a.value > b.value;
}
