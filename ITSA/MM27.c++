//[C_MM27-易] 計算兩整數間所有整數的總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        int height = abs(num2 - num1);
        cout << ((num1 + num2) * (height + 1)) / 2 << endl;
    }
    return 0;
}