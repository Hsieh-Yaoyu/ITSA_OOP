//[C_MM07-易] 計算平方值與立方值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6873
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double num;
    while (cin >> num) {
        double square = num * num;
        double cube = num * num * num;
        cout << num << " " << square << " " << cube << endl;
    }

    return 0;
}