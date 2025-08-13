#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int Mishka=0,Chris=0;

    for(int i=0;i<n;i++){

        int M,C;
        cin>>M>>C;

        if(M>C){
            Mishka++;
        }else if(C>M){
            Chris++;
        }
    }

    
        if(Mishka>Chris){
            cout<<"Mishka"<<endl;
        }else if(Chris>Mishka){
            cout<<"Chris"<<endl;
        }else{
            cout<<"Friendship is magic!^^"<<endl;
        }

        return 0;
}