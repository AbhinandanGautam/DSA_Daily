// check given string rotation of another string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;

    string temp = str1+str1;

    if(temp.find(str2)==string::npos){
        cout<<"Not Rotation"<<endl;
    }
    else{
        cout<<"Roatation"<<endl;
    }
    return 0;
}