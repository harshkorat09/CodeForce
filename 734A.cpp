#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Anton=0;
    int Danik=0;

    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            Anton++;
        }else{
            Danik++;
        }
    }

    if(Anton>Danik){
        cout<<"Anton";
    }else if(Danik>Anton){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}