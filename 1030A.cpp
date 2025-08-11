#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> count (2,0);

    for(int i=0;i<n;i++){

        count[arr[i]]++;
    }

    if(count[1]>=1){
        cout<<"HARD";
    }else if(count[0]>=1 && count[1]==0){
        cout<<"EASY";
    }



}