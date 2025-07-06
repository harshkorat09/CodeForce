#include<iostream>
using namespace std;



int main()
{
    int n;
    int count=0;
    cin>>n;

    string arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }

    for(int j=0;j<n;j++)
    {
        if(arr[j]=="x++" || arr[j]=="X++")
        {
            count++;
        }
        else if(arr[j]=="++x" || arr[j]=="++X")
        {
            ++count;
        }
        else if(arr[j]=="x--" || arr[j]=="X--")
        {
            count--;
        }
        else if(arr[j]=="--x" || arr[j]=="--X")
        {
            --count;
        }
    }

    cout<<count<<endl;

}