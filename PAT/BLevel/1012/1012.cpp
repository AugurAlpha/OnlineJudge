// 1012 数字分类
// auguralpha
// 2019-02-25

#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 1010;
int arr[maxn];
int cnt_a1 = 0;
int cnt_a2 = 0;
int cnt_a3 = 0;
int cnt_a4 = 0;
int cnt_a5 = 0;
int sum_a1 = 0;
int sum_a2 = 0;
double average_a4 = 0.0;
int max_a5 = 0;


int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++ i) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++ i) {
        if(arr[i] % 5 == 0 && arr[i] % 2 == 0) {
            sum_a1 += arr[i];
            ++ cnt_a1;
        }
        if(arr[i] % 5 == 1) {
            if(cnt_a2 % 2 == 0) {
                sum_a2 += arr[i];
            }
            else {
                sum_a2 -= arr[i];
            }
            ++ cnt_a2;
        }
        if(arr[i] % 5 == 2) {
            ++ cnt_a3;
        }
        if(arr[i] % 5 == 3) {
            average_a4 += arr[i];
            ++ cnt_a4;
        }
        if(arr[i] % 5 == 4) {
            max_a5 = max(max_a5, arr[i]);
            ++ cnt_a5;
        }
    }

    if(cnt_a1 != 0) {
        printf("%d ", sum_a1);
    }
    else {
        printf("N ");
    }
    if(cnt_a2 != 0) {
        printf("%d ", sum_a2);
    }
    else {
        printf("N ");
    }
    if(cnt_a3 != 0) {
        printf("%d ", cnt_a3);
    }
    else {
        printf("N ");
    }
    if(cnt_a4 != 0) {
        average_a4 = average_a4 / cnt_a4;
        printf("%.1f ", average_a4);
    }
    else {
        printf("N ");
    }
    if(cnt_a5 != 0) {
        printf("%d\n", max_a5);
    }
    else {
        printf("N\n");
    }
    return 0;
}
