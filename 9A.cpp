#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int Compare = max(Y, W);
    int count = 6 - Compare + 1;

    int gcd = __gcd(count, 6);

    cout << count / gcd << "/" << 6 / gcd << endl;

    return 0;
}