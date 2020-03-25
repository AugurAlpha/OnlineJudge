// 1014 福尔摩斯的约会
// auguralpha
// 2019-02-25

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string days[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main() {
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;
    bool mark = false;
    for(int i = 0; i < str1.size(); ++ i) {
        if(str1[i] == str2[i] && !mark && str1[i] > 64 && str1[i] < 72) {
            cout << days[str1[i] - 65] << " ";
            mark = true;
        }
        else if(str1[i] == str2[i] && mark && ((str1[i] > 64 && str1[i] < 79) || (str1[i] > 47 && str1[i] < 58))) {
            if(str1[i] > 64 && str1[i] < 79) {
                cout << str1[i] - 55 << ":";
            }
            else {
                cout << setw(2) << setfill('0') << right << str1[i] - 48 << ":";
            }
            break;
        }
    }

    for(int i = 0; i < str3.size(); ++ i) {
        if(str3[i] == str4[i] && ((str3[i] > 96 && str3[i] < 123) || (str3[i] > 64 && str3[i] < 91))) {
            cout << setw(2) << setfill('0') << right << i << endl;
        }
    }
    return 0;
}
