/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;         //declaration of the string str
    getline(cin,str);   //getline function is used to take an entire line as input
    string str1;
    getline(cin,str1);
    string result=str+str1;  //concatenation of two strings 
    cout<<result<<endl;
    cout<<str[5]<<endl;   //accessing a particular character from string
                          //indexing starts from 0
    
    return 0;
}
/*===========================OUTPUT=====================*/