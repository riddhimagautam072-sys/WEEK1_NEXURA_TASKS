#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Even numbers are: ";

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}