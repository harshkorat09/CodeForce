#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int pattern[3] = {a, b, c};
        int cycle_sum = a + b + c;
        int full_cycles = n / cycle_sum;
        int days = full_cycles * 3;
        int remaining = n - full_cycles * cycle_sum;

        for (int i = 0; remaining > 0; i++) {
            remaining -= pattern[i % 3];
            days++;
        }

        cout << days << endl;
    }

    return 0;
}