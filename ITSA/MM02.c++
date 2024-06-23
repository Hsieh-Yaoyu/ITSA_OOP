//[C_MM02-易] 計算三角形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double baseline, height;
    double area;
    while (cin >> baseline >> height) {
        area = (baseline * height) / 2.0;
        cout << fixed << setprecision(1) << area << endl;
    }

    return 0;
}