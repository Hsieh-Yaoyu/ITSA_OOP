//[C_MM05-易] 計算正方形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double num;
    double area;
    while (cin >> num) {
        area = num * num;
        cout << fixed << setprecision(1) << round(area * 10) / 10 << endl;
    }

    return 0;
}