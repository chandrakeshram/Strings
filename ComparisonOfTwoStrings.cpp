/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int comparison=str2.compare(str1);
    if(comparison==0){
        cout<<"Both strings are equal "<<endl;
    }
    else if(comparison>0){
        cout<<str2<<" is greater than "<<str1<<endl;
    }
    else {
        cout<<str1<<" is greater than "<<str2<<endl;
    }
    return 0;
}
/*===========================OUTPUT=====================*/