#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;


    unordered_set<char> validChars = {'c','o','d','e','f','r','s'};

    while (t--) {
        char c;
        cin >> c;

        if (validChars.count(c))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}