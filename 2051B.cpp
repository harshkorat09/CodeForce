#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int days = 0;
        int total = 0;
        int pattern[3] = {a, b, c};

        while (total < n) {
            total += pattern[days % 3];
            days++;
        }

        cout << days << endl;
    }

    return 0;
}