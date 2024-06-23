//[C_MM21-易] 算階乘
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        unsigned long long int sum = 1;
        for (int i = 1; i <= num; i++) sum *= i;
        cout<<sum<<endl;
    }
    return 0;
}