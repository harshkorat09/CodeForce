#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<string> Arr(T); 

    for (int i = 0; i < T; i++)
    {
        cin >> Arr[i];
    }


    for (int i = 0; i < T; i++)
    {
        if (Arr[i].length() > 10)
        {
            cout << Arr[i][0] << Arr[i].length() - 2 << Arr[i].back() << endl;
        }
        else
        {
            cout << Arr[i] << endl;
        }
    }

    return 0;
}