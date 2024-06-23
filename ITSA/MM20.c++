//[C_MM20-易] 十進位轉十六進位
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6912
#include <cmath>
#include <iomanip>
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
    int num;
    const char* HexTable = "0123456789ABCDEF";
    while (cin >> num) {
        vector<char> s;
        while (num != 0) {
            s.push_back(HexTable[num % 16]);
            num /= 16;
        }
        reverse(s.begin(),s.end());
        for (int i = 0; i < s.size();i++) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}