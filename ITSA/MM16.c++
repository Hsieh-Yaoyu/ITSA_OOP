//[C_MM16-易] 判斷座標是否在圓形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        if (num1 * num1 + num2 * num2 > 100 * 100)
            cout << "outside\n";
        else
            cout << "inside\n";
    }
    return 0;
}