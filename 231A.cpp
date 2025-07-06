#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;


    for(int i=0;i<n;i++)
    {
        int arr[3];
        int Sum=0;

        for(int j=0;j<3;j++)
        {
            cin>>arr[j];
            cout<<" ";

            Sum +=arr[j];
        }
        cout<<endl;

        if(Sum>=2)
        {
            count++;
        }
        
    }

    cout<<count;
    return 0;
}
