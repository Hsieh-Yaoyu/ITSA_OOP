//[C_MM04-易] 計算總和、乘積、差、商和餘數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2916
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    if (num1 >= 0 || num1 % num2 == 0)
        cout << num1 << "/" << num2 << "=" << num1 / num2 << "..." << num1 % num2 << endl;
    else
        cout << num1 << "/" << num2 << "=" << num1 / num2 - 1 << "..." << num1 % num2 + num2 << endl;
    return 0;
}