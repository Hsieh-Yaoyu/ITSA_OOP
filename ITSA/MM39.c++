//[C_MM39-易] 判斷是何種三角形
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
#include <iostream>
using namespace std;
void SWAP(int *a, int *b);

int main() {
    int num1, num2, num3;
    while (cin >> num1 >> num2 >> num3) {
        // 目標:num1 < num2 < num3
        if (num2 > num3) SWAP(&num1, &num2);
        if (num1 > num3) SWAP(&num1, &num3);
        if (num1 > num2) SWAP(&num1, &num2);
        if (num1 + num2 <= num3)  // 不是三角形
        {
            cout<<"Not Triangle\n";
            continue;
        }
        if (num3 * num3 == num2 * num2 + num1 * num1)
            cout<<"Right Triangle\n";
        else if (num3 * num3 >= num2 * num2 + num1 * num1)
            cout<<"Obtuse Triangle\n";
        else
            cout<<"Acute Triangle\n";
    }
    return 0;
}
void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}