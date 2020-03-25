// 1016 部分A+B
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int da, db;
    int pa = 0;
    int pb = 0;
    cin >> a >> da >> b >> db;
    for(int i = 0; i < a.size(); ++ i) {
        if(a[i] - '0' == da) {
            pa = pa * 10 + da;
        }
    }
    for(int i = 0; i < b.size(); ++ i) {
        if(b[i] - '0' == db) {
            pb = pb * 10 + db;
        }
    }
    cout << pa + pb << endl;
    return 0;
}
