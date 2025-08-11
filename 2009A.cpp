#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;

    int arr[2];

    for(int i=0 ;i<T;i++)
    {
        int arr[2];

        for(int j=0;j<2;j++){
           
            cin>>arr[j];

        }

        cout<<endl;
        cout<<(arr[1]-arr[0]);
        cout<<endl;

    }

    return 0;
}