// print freq of chars in string

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> freq;

    string s;
    cout<<"Enter string : ";
    cin>>s;

    for(auto i:s){
        freq[i]++;
    }

    for(auto i:freq){
        cout<<i.first<<" , count = "<<i.second<<endl;
    }
    
    return 0;
}