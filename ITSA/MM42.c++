//[C_MM42-中] 求(-1)^(n+1)*[1/(2n-1)]的和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6961
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        double sum = 0;
        for (int i = 1; i <= num; i++) {
            if (i % 2 == 0)
                sum -= 1.0 / (2.0 * i - 1.0);
            else
                sum += 1.0 / (2.0 * i - 1.0);
        }
        cout << fixed << setprecision(3) << round(sum * 1000) / 1000 << endl;
    }
    return 0;
}