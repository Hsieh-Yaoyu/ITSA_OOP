//[C_MM06-易] 英哩轉公里
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6870
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        cout << fixed << setprecision(1) << round(num * 1.6 * 10) / 10 << endl;
    }
    return 0;
}