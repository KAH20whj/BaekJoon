#include <iostream>

using namespace std;

int main() {
    int price, max = 2000, total;

    for (int i = 0; i < 3; i++) {
        cin >> price;
        if (price < max)
            max = price;
    }

    total += max;
    max = 2000;

    for (int i = 0; i < 2; i++) {
        cin >> price;
        if (price < max)
            max = price;
    }

    total += max;
    cout << total - 50;

    return 0;
}