/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool flag=1;
    for(int i=0;i<=(str.length())/2;i++){
        if(str[i]!=str[str.length()-1-i]){
            flag =0;
            break;

        }
    }
    if(flag ==0){
        cout<<"Not a Palindrome"<<endl;
    }
    else {
        cout<<"It is a Palindrome"<<endl;
    }
    return 0;
}
/*===========================OUTPUT=====================*/