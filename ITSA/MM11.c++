//[C_MM11-易] 購票計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6885
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int cost;
    cin >> cost;
    cout << "NT10=" << cost / 10 << endl;
    cost = cost % 10;
    cout << "NT5=" << cost / 5 << endl;
    cost = cost % 5;
    cout << "NT1=" << cost << endl;

    return 0;
}