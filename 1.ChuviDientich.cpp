#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Chu vi tam giac = " << a + b + c << endl;
    cout << "Dien tich tam giac = " << S << endl;
    return 0;
}