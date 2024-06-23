//[C_MM08-易] 計算兩數和的平方值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6876
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    while (cin >> num1 >> num2) {
        double sum = num1 + num2;
        double square = sum * sum;
        cout << square << endl;
    }

    return 0;
}