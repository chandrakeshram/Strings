/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="hgkgkahgkahasgkhgkzzgakj";
    int len=str.length();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]>str[j]){
                char temp= str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        
    }
    cout<<str<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/