//[C_MM32-易] Armstrong數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    int num100, num10, num1;
    while (cin >> num) {
        int temp = num;
        num100 = num / 100;
        num = num % 100;
        num10 = num / 10;
        num = num % 10;
        num1 = num;
        if (num100 * num100 * num100 + num10 * num10 * num10 + num1 * num1 * num1 == temp)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}