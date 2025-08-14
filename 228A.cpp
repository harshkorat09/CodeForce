#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> uniqueColors = {s1, s2, s3, s4};
    int toBuy = 4 - uniqueColors.size();

    cout << toBuy << endl;
    return 0;
}