#include <iostream>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem" << endl;
    } else if (delta == 0) {
        float x = -b / (2.0 * a);
        cout << "Phuong trinh co nghiem kep x = " << x << endl;
    } else {
        float x1 = (-b + sqrt(delta)) / (2.0 * a);
        float x2 = (-b - sqrt(delta)) / (2.0 * a);
        cout << "Phuong trinh co hai nghiem phan biet: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    return 0;
}