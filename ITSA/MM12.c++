//[C_MM12-易] 相遇時間計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double distance;
    while (cin >> distance) {
        double time;
        time = distance / (1 - 30 * 2.54 / 100);
        cout << ceil(time) << endl;
    }
    return 0;
}