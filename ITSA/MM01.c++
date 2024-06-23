//[C_MM01-易] 計算梯型面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double topline, baseline, height;
    double area;
    while (cin >> topline >> baseline >> height) {
        area = ((topline + baseline) * height) / 2;
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }
    return 0;
}