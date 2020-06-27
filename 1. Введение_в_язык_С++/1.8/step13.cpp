/*Напишите программу для вычисления целочисленного логарифма по основанию 2. */
#include <iostream>

using namespace std;

int log(int n) {
    int p = 0, i = 1;
    while (i <= n) {
        i *= 2;
        p++;
    }
    return p - 1;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int t;
        cin >> t;
        cout << log(t) << endl;
    }
    return 0;
}