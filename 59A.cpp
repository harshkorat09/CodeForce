#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<char> Word;
         char x;

     while (cin>>x)
     {
        cin>>x;
        Word.push_back(x);
     }

    int small=0;
    int capital=0;

    for(int i=0;i<Word.size();i++){

        if(Word[i]>=97 && Word[i]<=122){
            small++;
        }else{
            capital++;
        }
    }

    if(small>capital || small==capital){
        for(int i=0;i<Word.size();i++){
            if(Word[i]>=97 && Word[i]<=122){
                continue;
            }else{
                Word[i] += 32;
            }
        }
    }else{
          for(int i=0;i<Word.size();i++){
            if(Word[i]>=97 && Word[i]<=122){
                Word[i] -= 32;
            }else{
                continue;
            }
        }
    }

    for(int i=0;i<Word.size();i++){
        cout<<Word[i];
    }
}