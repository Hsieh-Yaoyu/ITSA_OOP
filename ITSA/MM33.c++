//[C_MM33-易] 找1~N的完美數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        if (num >= 6) {
            cout << "6";
        }
        for (int i = 28; i <= num; i++) {
            int sum = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    sum += j;
                }
            }
            if (sum == i) {
                cout << " " << i;
            }
        }
        cout << endl;
    }

    return 0;
}