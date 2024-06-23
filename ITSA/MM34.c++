//[C_MM34-易] 因數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        cout << "1";
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                cout << " " << i;
            }
        }
        endl(cout);
    }
    return 0;
}