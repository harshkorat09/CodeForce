#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string result;
    for (size_t i = 0; i < a.size(); ++i) {
        result += (a[i] != b[i]) ? '1' : '0';
    }

    cout << result << endl;
    return 0;
}