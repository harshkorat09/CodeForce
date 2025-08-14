#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            result += "I hate ";
        else
            result += "I love ";

        if (i == n - 1)
            result += "it";
        else
            result += "that ";
    }

    cout << result << endl;
}