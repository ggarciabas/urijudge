// Soma de impares consecutivos II

#include <iostream>
using namespace std;

int main() {
    int x, y, low, high, sum, qt;
    cin >> qt;
    for (int c = 0; c < qt; ++c) {
        cin >> x >> y;
        if (x < y) {
            low = x;
            high = y;
        } else {
            low = y;
            high = x;
        }
        sum = 0;
        for (int i = low + 1; i < high; i++)
            if (i % 2)
                sum += i;
        cout << sum << endl;
    }
    return 0;
}