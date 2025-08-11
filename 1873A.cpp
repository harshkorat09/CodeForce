#include<iostream>
#include<string>
using namespace std;

int main(){

    int T;
    cin>>T;

   

    for(int i=0;i<T;i++)
    {
        string P;

        cin>>P;
        cout<<endl;

        if(P=="abc")
        {
            cout<<"YES"<<endl;
        }
        else if(P[0]=="b" && P[1])
        {
            swap(P[1],P[2]);
        }
    }
}