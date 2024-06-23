//[C_MM03-易] 兩數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6861
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    double sum;
    while (cin >> num1 >> num2) {
        sum = num1 + num2;
        cout << sum << endl;
    }

    return 0;
}