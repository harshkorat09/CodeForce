#include<iostream>
using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    int years=0;

    while(b>=a){

        years++;

        b=b*2;
        a=a*3;
    }

    cout<<years;
}