#include <iostream>
#include <math.h>
using namespace std;

void dientichday(float r, float h) {
    float S = 2 * 3.14 * r * r;
    cout << "Dien tich day hinh tru = " << S << endl;
} 

void dientichxungquanh(float r, float h) {
    float S = 2 * 3.14 * r * h;
    cout << "Dien tich xung quanh hinh tru = " << S << endl;
}

void thetich(float r, float h) {
    float V = 3.14 * r * r * h;
    cout << "The tich hinh tru = " << V << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float r, h;
    cout << "Nhap ban kinh r va chieu cao h: ";
    cin >> r >> h;
    dientichday(r, h);
    dientichxungquanh(r, h);
    thetich(r, h);
    return 0;
}