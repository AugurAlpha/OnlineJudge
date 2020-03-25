// 1003 我要通过！
// auguralpha
// 2019-02-11
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
const int maxn = 110;

bool if_pat(string str);

int main() {
    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        bool flag = false;
        if(if_pat(str)){
            int cnt_a = 0;
            int cnt_b = 0;
            int cnt_c = 0;
            int cnt = 0;
            for(int i = 0; i < str.size(); ++i) {
                if(str[i] == 'P') {
                    if(cnt == 0) {
                        cnt = 1;
                    }
                    else {
                        break;
                    }
                }
                else if(str[i] == 'T') {
                    if(cnt == 1) {
                        cnt = 2;
                    }
                    else {
                        break;
                    }
                }
                else {
                    if(cnt == 0) {
                        cnt_a ++;
                    }
                    else if(cnt == 1) {
                        cnt_b ++;
                    }
                    else if(cnt == 2) {
                        cnt_c ++;
                    }
                }
            }

            if(cnt_a * cnt_b == cnt_c && cnt_b != 0) {
                flag = true;
            }
            else {
                flag = false;
            }
        }
        else {
            flag = false;
        }
        if(flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
bool if_pat(string str) {
    int cnt_P = 0;
    int cnt_A = 0;
    int cnt_T = 0;
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == 'P') {
            cnt_P ++;
        }
        else if(str[i] == 'A') {
            cnt_A ++;
        }
        else if(str[i] == 'T') {
            cnt_T ++;
        }
        else {
            return false;
        }
    }

    if(cnt_P == 0 || cnt_A == 0 || cnt_T == 0) {
        return false;
    }

    return true;
}
