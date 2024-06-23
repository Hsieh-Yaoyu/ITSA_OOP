//[C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int sum = 0;
        for (int i = 6; i <= num; i += 12) sum += i;
        cout << sum << endl;
    }
    return 0;
}