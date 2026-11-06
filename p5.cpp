#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    if (a >= b && a >= c && a >= d) {
        cout << "Greatest = " << a;
    }
    else if (b >= a && b >= c && b >= d) {
        cout << "Greatest = " << b;
    }
    else if (c >= a && c >= b && c >= d) {
        cout << "Greatest = " << c;
    }
    else {
        cout << "Greatest = " << d;
    }

    return 0;
}