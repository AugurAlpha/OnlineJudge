// 1009 说反话
// auguralpha
// 2019-02-11
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
vector<string> str;

int main() {
    string s;
    getline(cin, s);
    string tmp;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != ' ') {
            tmp += s[i];
        }
        else {
            str.push_back(tmp);
            tmp = "";
        }
    }
    str.push_back(tmp);

    for(int i = int(str.size()) - 1; i >= 0; --i) {
        i ? cout << str[i] << " " : cout << str[i] << endl;
    }
    return 0;
}
