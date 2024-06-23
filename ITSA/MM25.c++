//[C_MM25-易] 計算正整數被3整除之數值之總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int top = num;
        if (num % 3 == 1) top = num - 1;
        if (num % 3 == 2) top = num - 2;
        int sum = 0;
        if (top >= 3) {
            sum = ((3 + top) * (top / 3)) / 2;  // 等差公式，a1=3，an=top。
        }
        cout << sum << endl;
    }
    return 0;
}