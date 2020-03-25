// 1019 数字黑洞
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string ans = "6174";
string zero = "0000";
bool cmp(char a, char b);


int main() {
    string n;
    cin >> n;
    n.insert(0, 4 - n.size(), '0');
    while(true) {
        string str1 = n;
        string str2 = n;
        sort(str1.begin(), str1.end(), cmp);
        sort(str2.begin(), str2.end());
        int x = stoi(str1);
        int y = stoi(str2);
        int z = x - y;
        n = to_string(z);
        n.insert(0, 4 - n.size(), '0');
        cout << str1 << " - " << str2 << " = " << n << endl;
        if (n == ans || n == zero) {
            break;
        }
    }
    return 0;
}


bool cmp(char a, char b) {
    return a > b;
}
