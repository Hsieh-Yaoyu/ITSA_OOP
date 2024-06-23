//[C_MM18-易] 十進制轉二進制
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6903
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        bool binary[8];
        for (int j = 0; j < 8; j++) {
            binary[j] = 0;
        }
        int negative_flag = 0;
        if (num < 0) {
            for (int j = 0; j < 8; j++) {
                binary[j] = 1;
            }
            num *= -1;
            num -= 1;
            negative_flag = 1;
        }
        int i = 7;
        while (num > 0) {
            if (negative_flag == 1)
                (num % 2 == 1) ? (binary[i] = 0) : (binary[i] = 1);
            else
                binary[i] = num % 2;
            num = num / 2;
            i--;
        }
        for (int j = 0; j < 8; j++) {
            cout << binary[j];
        };
        cout << endl;
    }
    return 0;
}