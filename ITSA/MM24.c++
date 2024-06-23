//[C_MM24-易] 計算薪水
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6922
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int time, salary;
    while (cin >> time >> salary) {
        double sum = 0;
        if (time > 120)  // 超過120小的部分
        {
            sum += salary * (time - 120) * 1.66;
            time = 120;
        }
        if (time > 60)  // 超過60小的部分
        {
            sum += salary * (time - 60) * 1.33;
            time = 60;
        }
        if (time > 0)  // 剩的部分
            sum += salary * time;
        cout << fixed << setprecision(1) << round(sum * 10) / 10 << endl;
    }
    return 0;
}