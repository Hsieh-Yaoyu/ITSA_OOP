//[C_MM09-易] 計算 i 次方的值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        if (num > 31) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        double accumulation = 1;
        for (int i = 0; i < num; i++) accumulation *= 2;
        cout << fixed << setprecision(0) << accumulation << endl;
    }

    return 0;
}