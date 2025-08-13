#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxB = 0, currentB = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;

            if (x == 0) {
                currentB++;
                maxB = max(maxB, currentB);
            } else {
                currentB = 0;
            }
        }

        cout << maxB << endl;
    }

    return 0;
}