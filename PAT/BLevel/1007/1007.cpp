// 1007 素数对猜想
// auguralpha
// 2019-02-11
#include <cstdio>
#include <vector>
using namespace std;
vector<int> vec;

bool if_prime(int n);

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; ++i) {
        if(if_prime(i)) {
            vec.push_back(i);
        }
    }
    for(int i = 0; i < vec.size() - 1; ++i) {
        if(vec[i+1] - vec[i] == 2) {
            ++ cnt;
        }
    }

    printf("%d\n", cnt);
    return 0;
}

bool if_prime(int n) {
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
