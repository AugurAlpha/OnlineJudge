// 1018 锤子剪刀布
// auguralpha
// 2019-02-25

#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
int part_a[3];      // C J B
int part_b[3];      // C J B
int win_a[3];       // 胜 负 平
int win_b[3];       // 胜 负 平


int main() {
    int n;
    scanf("%d", &n);
    char a, b;
    memset(part_a, 0, sizeof(part_a));
    memset(part_b, 0, sizeof(part_b));
    memset(win_a, 0, sizeof(win_a));
    memset(win_b, 0, sizeof(win_b));
    while(n--) {
        getchar();
        scanf("%c %c", &a, &b);
        if(a == 'C') {
            if(b == 'C') {
                ++ win_a[1];
                ++ win_b[1];
            }
            else if(b == 'J') {
                ++ win_a[0];
                ++ win_b[2];
                ++ part_a[0];
            }
            else {
                ++ win_a[2];
                ++ win_b[0];
                ++ part_b[2];
            }
        }
        else if(a == 'J') {
            if(b == 'C') {
                ++ win_a[2];
                ++ win_b[0];
                ++ part_b[0];
            }
            else if(b == 'J') {
                ++ win_a[1];
                ++ win_b[1];
            }
            else {
                ++ win_a[0];
                ++ win_b[2];
                ++ part_a[1];
            }
        }
        else {
            if(b == 'C') {
                ++ win_a[0];
                ++ win_b[2];
                ++ part_a[2];
            }
            else if(b == 'J') {
                ++ win_a[2];
                ++ win_b[0];
                ++ part_b[1];
            }
            else {
                ++ win_a[1];
                ++ win_b[1];
            }
        }
    }
    printf("%d %d %d\n", win_a[0], win_a[1], win_a[2]);
    printf("%d %d %d\n", win_b[0], win_b[1], win_b[2]);

    if(part_a[0] >= part_a[1] && part_a[0] > part_a[2]){
        printf("C ");
    }
    else if(part_a[1] > part_a[0] && part_a[1] > part_a[2]){
        printf("J ");
    }
    else if(part_a[2] >= part_a[0] && part_a[2] >= part_a[1]){
        printf("B ");
    }

    if(part_b[0] >= part_b[1] && part_b[0] > part_b[2]){
        printf("C\n");
    }
    else if(part_b[1] > part_b[0] && part_b[1] > part_b[2]){
        printf("J\n");
    }
    else if(part_b[2] >= part_b[0] && part_b[2] >= part_b[1]){
        printf("B\n");
    }
    return 0;
}
