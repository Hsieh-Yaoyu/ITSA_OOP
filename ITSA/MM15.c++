//[C_MM15-易] 判斷座標是否在正方形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        if (num1 > 100 || num2 > 100)
            cout << "outside\n";
        else
            cout << "inside\n";
    }
    return 0;
}