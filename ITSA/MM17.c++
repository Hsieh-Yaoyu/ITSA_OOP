//[C_MM17-易] 求最大公因數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6903
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int MIN = min(num1,num2);
    int gcd = 1;
    for (int i = 1; i <= MIN; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
    return 0;
}