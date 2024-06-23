//[C_MM29-易] 最大質數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6935
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int maxprime;
        if (num == 1) return 0;
        for (int i = 2; i < num; i++)  // 比num小的一個一個看
        {
            int Isprime_Flag = 1;
            for (int j = 2; j * j <= i; j++)  // 看這個是不是質數
            {
                if (i % j == 0) {
                    Isprime_Flag = 0;
                    break;
                }
            }
            if (Isprime_Flag) maxprime = i;
        }
        cout << maxprime << endl;
        }

    return 0;
}