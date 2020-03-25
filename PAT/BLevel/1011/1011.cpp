// 1011 A+B 和 C
// auguralpha
// 2019-02-25

#include <iostream>
using namespace std;

int main() {
    int n;
    bool mark;
    long long a, b, c;
    cin >> n;
    for(int i = 1; i <= n; ++ i) {
        cin >> a >> b >> c;
        if(a + b > c) {
            mark = true;
        }
        else {
            mark = false;
        }
        cout << "Case #" << i << ": " << (mark ? "true" : "false") << endl;
    }

    return 0;
}
