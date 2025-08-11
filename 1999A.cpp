#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int arr[t];

    for(int i=0;i<t;i++){

        cin>>arr[i];
        
        int unit = arr[i]/10;
        int tens = arr[i]-(10*unit);
        
        int ans = unit + tens;

        arr[i]=ans;
    }

    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
}