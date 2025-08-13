#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mask = 0;
        mask ^= (1 << a);
        mask ^= (1 << b);
        mask ^= (1 << c);

        for (int i = 0; i < 10; ++i) {
            if (mask & (1 << i)) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}