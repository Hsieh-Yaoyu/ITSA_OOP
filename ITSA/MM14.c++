//[C_MM14-易] 計算時間的組合
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int time;
    cin >> time;
    int days = time / (60 * 60 * 24);
    time = time % (60 * 60 * 24);
    int hours = time / (60 * 60);
    time = time % (60 * 60);
    int minutes = time / 60;
    time = time % 60;
    int seconds = time;
    cout << days << " days\n" << hours << " hours\n" << minutes << " minutes\n" << seconds << " seconds\n";
    return 0;
}