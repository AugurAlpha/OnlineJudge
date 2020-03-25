// 1017 A除以B
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    int q = 0;
    int r = 0;
    cin >> a >> b;
    int len_a = int(a.size());
    q = (a[0] - '0') / b;
    if (len_a == 1 || (q != 0 && len_a > 1)) {
        cout << q;
    }
    r = (a[0] - '0') % b;
    for(int i = 1; i < len_a; ++ i) {
        q = (a[i] - '0' + r * 10) / b;
        r = (a[i] - '0' + r * 10) % b;
        cout << q;
    }
    cout << " " << r << endl;
    return 0;
}
