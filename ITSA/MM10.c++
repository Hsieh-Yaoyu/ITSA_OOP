//[C_MM10-易] 攝氏溫度轉華式溫度
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double C;
    while (cin >> C) {
        double F = (C * 9) / 5 + 32;
        cout << fixed << setprecision(1) << round(F * 10) / 10 << endl;
    }

    return 0;
}