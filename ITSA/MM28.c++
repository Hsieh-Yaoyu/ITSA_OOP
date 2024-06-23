//[C_MM28-易] 計算1到N之間屬於5和7的倍數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        if (num >= 35) {
            cout << 35 << " ";
        }
        for (int i = 70; i <= num; i += 35) {
            cout << i;
            if (i + 35 <= num) {
                cout << " ";
            }
        };
        cout << endl;
    }
    return 0;
}