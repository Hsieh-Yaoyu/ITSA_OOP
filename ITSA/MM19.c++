//[C_MM19-易] 電話費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int min;
    while (cin >> min) {
        if (min <= 800)
            cout << fixed << setprecision(1) << min * 0.9 << endl;
        else if (min < 1500)
            cout << fixed << setprecision(1) << min * 0.9 * 0.9 << endl;
        else
            cout << fixed << setprecision(1) << min * 0.9 * 0.79 << endl;
    }
    return 0;
}