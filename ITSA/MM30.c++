//[C_MM30-易] 質數判別
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int isprime_flag = 1;
        if (num == 1) return 0;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << "NO\n";
                isprime_flag = 0;
                break;
            }
        }
        if (isprime_flag) cout << "YES\n";
    }

    return 0;
}