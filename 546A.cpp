#include<iostream>
#include<vector>
using namespace std;

int main(){

    int k;
    int n;
    int w;

    cin>>k>>n>>w;

    int TotalCost = (w*(w+1)*k)/2;

    int borrow = TotalCost - n;

    if(borrow>0){
        cout<<borrow;
    }
    else{
        cout<<0;
    }

}