// 1013 数素数
// auguralpha
// 2019-02-25

#include <cstdio>
#include <vector>
using namespace std;
vector<int> vec;

bool is_prime(int n);

int main() {
    int m, n;
    int cnt = 0;
    scanf("%d%d", &m, &n);
    for(int i = 2; ; ++ i) {
        if(is_prime(i)) {
            ++ cnt;
            if(m <= cnt && n >= cnt) {
                vec.push_back(i);
            }
        }
        if(n < cnt) {
            break;
        }
    }
    for(int i = 0; i < vec.size(); ++ i) {
        if(i % 10 == 9 || i == vec.size() - 1) {
            printf("%d\n", vec[i]);
        }
        else {
            printf("%d ", vec[i]);
        }
    }
    return 0;
}

bool is_prime(int n) {
    for(int i = 2; i * i <= n; ++ i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
