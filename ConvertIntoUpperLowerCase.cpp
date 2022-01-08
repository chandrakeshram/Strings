/*=======================PROBLEM STATEMENT==============
Convert a string into uppercase or lowercase 
=======================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="klakuhljdkejlaklhehd";
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){  //Without use of STLs 
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;                  //Without use of STLs
        }
    }
    cout<<str<<endl;
    string str1="jaluhejoslanichek";
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);  //with use of STL
    cout<<str1<<endl;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);  //with use of STL
    cout<<str1<<endl; 
    return 0;
}
/*===========================OUTPUT=====================
KLAKUHLJDKEJLAKLHEHD
klakuhljdkejlaklhehd
JALUHEJOSLANICHEK
jaluhejoslanichek
=======================================================*/

